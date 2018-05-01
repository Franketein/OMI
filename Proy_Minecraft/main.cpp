#include <iostream>
#include <queue>

using namespace std;

class celda
{
public:
   int fil;
   int colu;
   bool indestructible = false;
   bool visitado = false;
   int tiempo = 1;
   int transcurrido = 999999;
};

class myComparator
{
public:
    int operator() (const celda& c1, const celda& c2)
    {
        return c1.transcurrido > c2.transcurrido;
    }
};

int main()
{
    int n, m, filaInicial, colInicial, filaFinal, colFinal;
    cin >> n >> m >> filaInicial >> colInicial >> filaFinal >> colFinal;
    filaFinal--;
    filaInicial--;
    colFinal--;
    colInicial--;
    celda mapa[n][m];

    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            char caracter;
            cin >> caracter;
            celda temporal;
            if (caracter == '#')
                temporal.indestructible = true;
            else if (caracter != '.')
                temporal.tiempo += caracter-'0';

            temporal.fil = i;
            temporal.colu = j;
            mapa[i][j] = temporal;
        }
    }

    mapa[filaInicial][colInicial].tiempo = 0;
    mapa[filaInicial][colInicial].transcurrido = 0;

    priority_queue <celda, vector<celda>, myComparator > pq;
    pq.push(mapa[filaInicial][colInicial]);

    int direcciones[4][2] = {{0, 1}, {1, 0}, {0,-1} , {-1, 0}};

    int fila = 0;
    int col = 0;
    while (!pq.empty())
    {
        celda actual = pq.top();
        pq.pop();

        fila = actual.fil;
        col = actual.colu;
        mapa[fila][col].visitado = true;

        //cout<<fila<<","<<col<<" - "<<actual.transcurrido<<endl;

        if (fila == filaFinal && col == colFinal)
        {
            //actual.transcurrido += actual.tiempo;
            cout<<actual.transcurrido<<endl;
            break;
        }
        for (int i = 0; i<4; i++)
        {
            int nextCol = col+direcciones[i][1];
            int nextFila = fila+direcciones[i][0];
            if (nextFila < n && nextFila >= 0 && nextCol < m && nextCol >= 0 && mapa[nextFila][nextCol].indestructible != true && (mapa[nextFila][nextCol].visitado != true)  && mapa[nextFila][nextCol].transcurrido > actual.transcurrido+mapa[nextFila][nextCol].tiempo)
            {
                actual.transcurrido+=mapa[nextFila][nextCol].tiempo;
                mapa[nextFila][nextCol].transcurrido = actual.transcurrido;
                pq.push(mapa[nextFila][nextCol]);
                actual.transcurrido-=mapa[nextFila][nextCol].tiempo;
            }
        }
    }

    return 0;
}
