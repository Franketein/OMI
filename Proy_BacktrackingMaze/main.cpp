#include <iostream>

using namespace std;

const int N = 5;
char laberinto[N][N];

typedef struct movimientos {
   int x,y;
}movimientos;

bool findPath(int x, int y)
{
    if (laberinto[y][x] == 'F')
        return true;

    cout<<y << "," <<x<<endl;
    movimientos posiblesMov[4] = { {0,-1},{1,0},{0,1},{-1,0}};
    movimientos sigMov;
    for (int i = 0; i<4; i++)
    {
        sigMov.x = x+posiblesMov[i].x;
        sigMov.y = y+posiblesMov[i].y;
        if (sigMov.x < N && sigMov.y < N && sigMov.x >= 0 && sigMov.y >= 0 && (laberinto[sigMov.y][sigMov.x] == 'O' || laberinto[sigMov.y][sigMov.x] == 'F') )
        {
            laberinto[y][x] = 'X';
            if (!findPath(sigMov.x, sigMov.y))
                laberinto[y][x] = 'O';
            else
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    cout<< "O=libre/#=pared/F=meta - Dejar el espacio 0,0 libre (con 'O'), de ahí se inicia el laberinto siempre"<<endl;
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            cin >> laberinto[i][j];
        }
    }
    if (findPath(0,0))
    {
        for (int i = 0; i<N; i++)
        {
            for (int j = 0; j<N; j++)
            {
                cout<<laberinto[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"No hay solución"<<endl;
    }

    return 0;
}
