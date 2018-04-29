#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

class casilla {
public:
    char valor;
    int fil = 0;
    int colu = 0;
    int dia = 0;
};

int main()
{
    int R, C, K;
    cin >> R >> C >> K;
    casilla mapa[R][C];
    int origenfila;
    int origencol;
    for (int i  = 0; i<R; i++)
    {
        for (int j = 0; j<C; j++)
        {
            casilla temporal;
            temporal.fil = i;
            temporal.colu = j;
            temporal.dia = 0;
            cin >> temporal.valor;
            if (temporal.valor == '$')
            {
                origencol = j;
                origenfila = i;
            }
            mapa[i][j] = temporal;
        }
    }

    queue<casilla> Q;
    Q.push(mapa[origenfila][origencol]);
    while (!Q.empty())
    {
        casilla actual = Q.front();
        Q.pop();
        int fila = actual.fil;
        int col = actual.colu;
        int hoy = actual.dia;
        if (fila == origenfila && col == origencol)
        {
            //Hoa
        }
        else
            mapa[fila][col].valor = (char)hoy;
        //Este
        if (col + 1 < C && mapa[fila][col+1].valor == '.')
        {
            mapa[fila][col+1].dia = hoy++;
            Q.push(mapa[fila][col+1]);
        }

        //Sur
        if (fila + 1 < R && mapa[fila+1][col].valor == '.')
        {
            mapa[fila+1][col].dia = hoy++;
            Q.push(mapa[fila+1][col]);
        }

        //Oeste
        if (col - 1 >= 0 && mapa[fila][col-1].valor == '.')
        {
            mapa[fila][col-1].dia = hoy++;
            Q.push(mapa[fila][col-1]);
        }

        //Norte
        if (fila - 1 >= 0 && mapa[fila-1][col].valor == '.')
        {
            mapa[fila-1][col].dia = hoy++;
            Q.push(mapa[fila-1][col]);
        }
    }

    for (int i  = 0; i<R; i++)
    {
        for (int j = 0; j<C; j++)
        {
            cout<<mapa[i][j].valor;
        }
        cout<<endl;
    }

    return 0;
}
