#include <iostream>
#include <queue>

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
    int laberinto[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    queue<celda> Q;
    celda celdaInicial;
    Q.push(celdaInicial);
    while (!Q.empty())
    {
        celda celdaActual = Q.front();
        celdaActual.visitado = true;
        Q.pop();
        int x = celdaActual.x;
        int y = celdaActual.y;
        laberinto[y][x] = VISITADO;
        //Si es la salida terminar
        /*if (celdaActual.valor == 3)
        {
            cout<<celdaActual.valor<<endl;
            break;
        }*/

        //Revisar vecino norte
        int norte = laberinto[y-1][x];
        if (y-1 >= 0 && norte != VISITADO && norte != PARED)
        {
            celda vecino;
            vecino.x = x;
            vecino.y = y-1;
            vecino.valor = norte;
            Q.push(vecino);
            //cout<<"norte - ";
        }

        //Revisar vecino este
        int este = laberinto[y][x+1];
        if (x+1 < 3 && este != VISITADO && este != PARED)
        {
            celda vecino;
            vecino.x = x+1;
            vecino.y = y;
            vecino.valor = este;
            Q.push(vecino);
           // cout<<"este - ";
        }

        //Revisar vecino sur
        int sur = laberinto[y+1][x];
        if (y+1 < 3 && sur != VISITADO && sur != PARED)
        {
            celda vecino;
            vecino.x = x;
            vecino.y = y+1;
            vecino.valor = sur;
            Q.push(vecino);
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
            Q.push(vecino);
            //cout<<"oeste - ";
        }

        cout<<celdaActual.valor<<", ";
    }
    return 0;
}
