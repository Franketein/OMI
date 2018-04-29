#include <iostream>

using namespace std;
int N = 8;
int tablero[8][8] = {0};


typedef struct movimientos {
   int x,y;
}movimientos;

void imprimirSolucion ()
{
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            cout<<tablero[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool posible (int fila, int col)
{
   if ((fila >= 0 && fila < N) && (col >= 0 && col < N) && (tablero[fila][col] == 0))
      return true;
   return false;
}

bool solve(int visitadas, int fila, int col)
{
    //cout<<visitadas<<endl;
    if (visitadas == N*N-1)
        imprimirSolucion();

    movimientos posiblesMov[8] = { {2,1},{1,2},{-1,2},{-2,1},
                              {-2,-1},{-1,-2},{1,-2},{2,-1} };
    movimientos sigMov;
    for (int i = 0; i<8; i++)
    {
        sigMov.x = col+posiblesMov[i].x;
        sigMov.y = fila+posiblesMov[i].y;
        if (posible(sigMov.y, sigMov.x))
        {
            tablero[sigMov.y][sigMov.x] = visitadas+1;
            solve(visitadas+1, sigMov.y, sigMov.x);
            //if (solve(visitadas+1, sigMov.y, sigMov.x))
                //return true;
            //else
                tablero[sigMov.y][sigMov.x] = 0;
        }
    }
    return false;
}

int main()
{
    //cin >> N;
    solve(0,0,0);
    imprimirSolucion();
    return 0;
}
