#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class celda {
    public:
        int fil;
        int colu;
        char valor;
        int distancia = 99999;
};

vector< vector<celda> > mapa;
int m, n;
int direcciones[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void buscaGuardia (int y, int x)
{
    bool visitas[m][n] = {false};
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            visitas[i][j] = false;
        }
    }
    queue<celda> Q;
    mapa[y][x].distancia = 0;
    Q.push(mapa[y][x]);
    while (!Q.empty())
    {
        celda actual = Q.front();
        Q.pop();
        int fila = actual.fil;
        int col = actual.colu;
        visitas[fila][col] = true;
        //cout<<fila<<" , "<<col<<" - "<<actual.distancia<<endl;
        for (int i = 0; i<4; i++)
        {
            int nextFila = fila+direcciones[i][0];
            int nextCol = col+direcciones[i][1];
            if (nextCol < n && nextCol >= 0 && nextFila < m && nextFila >= 0 && visitas[nextFila][nextCol] == false && mapa[nextFila][nextCol].valor == '.' && mapa[nextFila][nextCol].distancia > actual.distancia+1)
            {
                mapa[nextFila][nextCol].distancia = actual.distancia+1;
                Q.push(mapa[nextFila][nextCol]);
            }
        }
    }
}

int main()
{
    cin >> m >> n;
    for (int i = 0; i<m; i++)
    {
        vector< celda > fila;
        for (int j = 0; j<n; j++)
        {
            celda casilla;
            cin >> casilla.valor;
            casilla.fil = i;
            casilla.colu = j;
            fila.push_back(casilla);
        }
        mapa.push_back(fila);
    }

    int maxDistancia = 0;
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (mapa[i][j].valor == 'G')
            {
                buscaGuardia(i, j);
            }
        }
    }

    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (mapa[i][j].valor == '.' && mapa[i][j].distancia > maxDistancia)
            {
                //cout<<i<<","<<j<<" - "<<mapa[i][j].distancia<<endl;
                maxDistancia = mapa[i][j].distancia;
            }
        }
    }

    cout<<maxDistancia<<endl;
    return 0;
}
