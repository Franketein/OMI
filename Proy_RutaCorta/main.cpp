#include <iostream>
#include <queue>


using namespace std;

class casilla {
public:
    int fil;
    int colu;
    bool pared = false;
    bool visitado = false;
};

int manhattan(int x1, int y1, int x2, int y2)
{
    int compHor = (x2-x1);
    if (compHor < 0)
        compHor *= -1;

    int compVer = (y2-y1);
    if (compVer < 0)
        compVer *= -1;
    int dist = compHor+compVer;
}

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
                finFil == i;
                finCol == j;
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
    while (!Q.empty())
    {

    }

    return 0;
}
