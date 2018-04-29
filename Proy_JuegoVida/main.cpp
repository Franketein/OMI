#include <iostream>

using namespace std;

void instrucciones();
bool usuarioDijoSi();
const int MAX_FILA = 20;
const int MAX_COL = 60;

class Vida
{
public:
    void inicializar();
    void presenta();
    void actualizaMundo();
private:
    int mundo[MAX_FILA+2][MAX_COL+2];
    int cuentaVecinos(int fila, int col);
};

int main()
{
    Vida elJuegoDeLaVida;
    instrucciones();
    elJuegoDeLaVida.inicializar();
    elJuegoDeLaVida.presenta();
    /*cout<<"Quiere continuar viendo a la siguiente generacion?" <<endl;
    while (usuarioDijoSi())
    {
        elJuegoDeLaVida.actualizaMundo();
        elJuegoDeLaVida.presenta();
        cout<<"Quiere continuar viendo a la siguiente generacion?"<<endl;
    }*/
    for (int i=0; i<30; i++)
    {
        elJuegoDeLaVida.actualizaMundo();
        elJuegoDeLaVida.presenta();
        cout<<endl<<endl;
    }
    return 0;
}

int Vida::cuentaVecinos(int fila, int col)
{
    int i, j;
    int contador=0;
    for (i = fila-1; i<=fila+1; i++)
    {
        for (int j = col-1; j<=col+1;j++)
        {
            contador+=mundo[i][j];
        }
    }
    contador-=mundo[i][j];
    return contador;
}

void Vida::actualizaMundo()
{
    int fila, col;
    int siguienteMundo[MAX_FILA+2][MAX_COL+2];

    for (fila = 1; fila <= MAX_FILA; fila++)
    {
        for (col = 1; col <= MAX_COL; col++)
        {
            switch(cuentaVecinos(fila, col))
            {
            case 2:
                siguienteMundo[fila][col] = mundo[fila][col];
                break;
            case 3:
                siguienteMundo[fila][col] = 1;
                break;
            default:
                siguienteMundo[fila][col] = 0;
            }
        }
    }

    for (fila = 1; fila <= MAX_FILA; fila++)
    {
        for (col = 1; col <= MAX_COL; col++)
        {
            mundo[fila][col] = siguienteMundo[fila][col];
        }
    }
}

void Vida::inicializar()
{
    int fila, col;
    for (fila = 0; fila <= MAX_FILA+1; fila++)
        for (col = 0; col <= MAX_COL; col++)
            mundo[fila][col] = 0;

    cout<< "Escriba la lista de celdas vivas" <<endl;
    cout<< "Termine la lista con el par -1 -1"<<endl;
    cin >> fila >> col;

    while (fila != -1 || col != -1)
    {
        if (fila >= 1 && fila <= MAX_FILA)
        {
            if (col >= 1 && col <= MAX_COL)
            {
                mundo[fila][col] = 1;
            }
            else
            {
                cout<<"La columna " << col<<" se salio de rango"<<endl;
            }
        }
        else
        {
            cout<<"La fila " <<fila<<" se salio de rango"<<endl;
        }
        cin  >>fila >> col;
    }
}

void Vida::presenta()
{
    int fila ,col;
    cout<<"\nLa configuracion actual del juego de la vida es:"<<endl;
    for (fila = 1; fila<=MAX_FILA; fila++)
    {
        for (col = 1; col<=MAX_COL; col++)
        {
            if (mundo[fila][col] == 1)
                cout<<"*";
            else
                cout<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}

bool usuarioDijoSi()
{
    int c;
    bool respuestaInicial = true;

    do {
        if (respuestaInicial)
            cout<<" (s/n)"<<flush;
        else
            cout<<"Responda con s o n"<<flush;

        do {
            c = cin.get();
        } while (c == '\n' || c==' ' || c=='\t');
        respuestaInicial = true;
    } while (c != 's' && c != 'S' && c!='n' && c!='N');
    return (c == 's' || c == 'S');
}

void instrucciones()
{
    cout<<"Instrucciones"<<endl<<endl;
}
