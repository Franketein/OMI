#include <iostream>
#include <vector>

using namespace std;

class celda
{
public:
    int fila = 0;
    int columna = 0;
    int valor = 0;
    int tiempo = 0;
    bool visitada = false;
};

int main()
{
    int N, M;
    cin>>N>>M;
    celda matriz[N][M];
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<M; j++)
        {
            matriz[i][j].fila = i;
            matriz[i][j].columna = j;
            cin >> matriz[i][j].valor;
        }
    }

    vector<celda> Q;

    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<M; j++)
        {
            if (matriz[i][j].valor==2)
            {
                Q.push_back(matriz[i][j]);
            }
        }
    }

    int total = 0;


    while (Q.size() > 0)
    {
        celda celdaActual = Q[0];
        celdaActual.visitada = true;
        Q.erase(Q.begin());
        //Vecino Derecha
        if (celdaActual.columna+1 < M && matriz[celdaActual.fila][celdaActual.columna+1].valor == 1)
        {
            matriz[celdaActual.fila][celdaActual.columna+1].valor = 2;
            matriz[celdaActual.fila][celdaActual.columna+1].tiempo = celdaActual.tiempo+1;
            Q.push_back(matriz[celdaActual.fila][celdaActual.columna+1]);
        }
        //Vecino Abajo
        if (celdaActual.fila+1 < N && matriz[celdaActual.fila+1][celdaActual.columna].valor == 1)
        {
            matriz[celdaActual.fila+1][celdaActual.columna].valor = 2;
            matriz[celdaActual.fila+1][celdaActual.columna].tiempo = celdaActual.tiempo+1;
            Q.push_back(matriz[celdaActual.fila+1][celdaActual.columna]);
        }
        //Vecino Izquierda
        if (celdaActual.columna-1 >= 0 && matriz[celdaActual.fila][celdaActual.columna-1].valor == 1)
        {
            matriz[celdaActual.fila][celdaActual.columna-1].valor = 2;
            matriz[celdaActual.fila][celdaActual.columna-1].tiempo = celdaActual.tiempo+1;
            Q.push_back(matriz[celdaActual.fila][celdaActual.columna-1]);
        }
        //Vecino Arriba
        if (celdaActual.fila-1 >= 0 && matriz[celdaActual.fila-1][celdaActual.columna].valor == 1)
        {
            matriz[celdaActual.fila-1][celdaActual.columna].valor = 2;
            matriz[celdaActual.fila-1][celdaActual.columna].tiempo = celdaActual.tiempo+1;
            Q.push_back(matriz[celdaActual.fila-1][celdaActual.columna]);
        }

        //Imprimir Cola
        /*for (int i = 0; i<Q.size(); i++)
        {
            cout<<Q[i].fila<<","<<Q[i].columna<<","<<Q[i].tiempo<<"|";
        }
        cout<<endl;*/
        total = celdaActual.tiempo;
    }

    cout<<total;
    return 0;
}
