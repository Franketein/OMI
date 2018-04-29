#include <iostream>
#include <stack>

using namespace std;
const int PARED = 0;
const int VISITADO = -1;

class celda
{
public:
    int valor = 1;
    int x = 0;
    int y = 0;
    bool visitado = false;
};

int main()
{
    int laberinto[6][6] = {{1,0,2,0,3,0},{4,5,6,0,7,8},{0,0,9,0,0,10},{11,12,13,0,14,15},{16,0,0,0,17,0},{18,19,20,21,22,0}};

    stack<celda> S;
    celda celdaInicial;
    S.push(celdaInicial);
    while (!S.empty())
    {
        celda celdaActual = S.top();
        celdaActual.visitado = true;
        S.pop();
        int x = celdaActual.x;
        int y = celdaActual.y;
        laberinto[y][x] = VISITADO;
        //Si es la salida terminar
        if (celdaActual.valor == 3)
        {
            cout<<celdaActual.valor<<endl;
            break;
        }

        //Revisar vecino norte
        int norte = laberinto[y-1][x];
        if (y-1 >= 0 && norte != VISITADO && norte != PARED)
        {
            celda vecino;
            vecino.x = x;
            vecino.y = y-1;
            vecino.valor = norte;
            S.push(vecino);
            //cout<<"norte - ";
        }

        //Revisar vecino este
        int este = laberinto[y][x+1];
        if (x+1 < 6 && este != VISITADO && este != PARED)
        {
            celda vecino;
            vecino.x = x+1;
            vecino.y = y;
            vecino.valor = este;
            S.push(vecino);
           // cout<<"este - ";
        }

        //Revisar vecino sur
        int sur = laberinto[y+1][x];
        if (y+1 < 6 && sur != VISITADO && sur != PARED)
        {
            celda vecino;
            vecino.x = x;
            vecino.y = y+1;
            vecino.valor = sur;
            S.push(vecino);
            //cout<<"sur "<<x<<" "<<y+1<<" - ";
        }

        //Revisar vecino oeste
        int oeste = laberinto[y][x-1];
        if (x-1>=0 && oeste != VISITADO && oeste != PARED)
        {
            celda vecino;
            vecino.x = x-1;
            vecino.y = y;
            vecino.valor = oeste;
            S.push(vecino);
            //cout<<"oeste - ";
        }

        cout<<celdaActual.valor<<", ";
    }
    return 0;
}
