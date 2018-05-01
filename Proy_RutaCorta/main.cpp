#include <iostream>
#include <queue>


using namespace std;

class casilla {
public:
    int fil;
    int colu;
    bool pared = false;
    bool visitado = false;
    int padreFila = -1;
    int padreCol = -1;
    int distancia = 0;
};

/*int manhattan(int x1, int y1, int x2, int y2)
{
    int compHor = (x2-x1);
    if (compHor < 0)
        compHor *= -1;

    int compVer = (y2-y1);
    if (compVer < 0)
        compVer *= -1;
    int dist = compHor+compVer;
}*/

int main()
{
    int n, m;
    cin >> n >> m;
    casilla mapa[n][m];
    int inicioFil = 0;
    int inicioCol = 0;
    int finFil = 0;
    int finCol = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            char valor;
            cin >> valor;
            casilla cuadro;
            cuadro.fil = i;
            cuadro.colu = j;
            if (valor == 'a')
            {
                inicioFil = i;
                inicioCol = j;
            }
            else if (valor == 'b')
            {
                finFil = i;
                finCol = j;
            }
            else if (valor == '#')
            {
                cuadro.pared = true;
            }
            mapa[i][j] = cuadro;
        }
    }

    queue<casilla> Q;
    Q.push(mapa[inicioFil][inicioCol]);
    int direcciones[4][2] = {{0, 1}, {1, 0}, {0,-1} , {-1, 0}};

    int fila = 0;
    int col = 0;
    while (!Q.empty())
    {
        casilla actual = Q.front();
        Q.pop();

        fila = actual.fil;
        col = actual.colu;
        mapa[fila][col].visitado = true;

        //cout<<fila<<","<<col<<endl;

        if (fila == finFil && col == finCol)
        {
            cout<<actual.distancia<<endl;
            break;
        }
        for (int i = 0; i<4; i++)
        {
            int nextCol = col+direcciones[i][1];
            int nextFila = fila+direcciones[i][0];
            if (nextFila < n && nextFila >= 0 && nextCol < m && nextCol >= 0 && mapa[nextFila][nextCol].pared != true && mapa[nextFila][nextCol].visitado != true)
            {
                actual.distancia++;
                mapa[nextFila][nextCol].distancia = actual.distancia;
                Q.push(mapa[nextFila][nextCol]);
            }
        }
    }

    return 0;
}
