#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class celda {
    public:
    int fil;
    int colu;
    bool visitado = false;
    int altura;
    int recorrido = 0;
    bool costa = false;
};

int main()
{
    int n, m;
    cin >> n >> m;
    celda mapa[n][m];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            mapa[i][j].fil = i;
            mapa[i][j].colu = j;
            cin >> mapa[i][j].altura;
        }
    }

    int direcciones[8][2] = {{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}};

    auto comparator = [](celda a,celda b)
    {
        return (a.recorrido > b.recorrido);
    };

    vector<celda> costas;
    for (int i = 0; i<n; i++)
    {
        bool exit = false;
        for (int j = 0; j<m; j++)
        {
            if (mapa[i][j].altura < 0)
            {
                priority_queue<celda, vector<celda>, decltype(comparator)> pq(comparator);
                pq.push(mapa[i][j]);
                while (!pq.empty())
                {
                    celda actual = pq.top();
                    pq.pop();
                    int fila = actual.fil;
                    int col = actual.colu;
                    mapa[fila][col].visitado = true;
                    for (int apunta = 0; apunta<8; apunta++)
                    {
                        int nextFila = fila+direcciones[apunta][0];
                        int nextCol = col+direcciones[apunta][1];
                        if (nextCol >= m || nextCol < 0 || nextFila >= n || nextFila < 0 || mapa[nextFila][nextCol].visitado == true || mapa[nextFila][nextCol].costa == true)
                            continue;

                        if (mapa[nextFila][nextCol].altura < 0)
                        {
                            pq.push(mapa[nextFila][nextCol]);
                        }
                        else if (mapa[fila][col].costa != true)
                        {
                            costas.push_back(mapa[fila][col]);
                            mapa[fila][col].costa = true;
                        }
                    }

                }

                exit = true;
                break;
            }
        }
        if (exit)
            break;
    }

    int minDistance = 999999;
    for (int i = 0; i<costas.size(); i++)
    {
        priority_queue<celda, vector<celda>, decltype(comparator)> pq(comparator);
        pq.push(costas[i]);

        int fila = 0;
        int col = 0;
        bool exit = false;
        while (!pq.empty() && exit == false)
        {
            celda actual = pq.top();
            pq.pop();

            int fila = actual.fil;
            int col = actual.colu;
            mapa[fila][col].visitado = true;

            //cout<<fila<<","<<col<<" - "<<actual.recorrido<<endl;
            for (int j = 0; j<8; j++)
            {
                int nextCol = col+direcciones[j][1];
                int nextFila = fila+direcciones[j][0];
                if (nextFila < n && nextFila >= 0 && nextCol < m && nextCol >= 0 && mapa[nextFila][nextCol].visitado != true)
                {
                    if (mapa[nextFila][nextCol].altura < 0)
                    {
                        exit = true;
                        if (actual.recorrido < minDistance)
                            minDistance = actual.recorrido;
                        break;
                    }
                    actual.recorrido+=mapa[nextFila][nextCol].altura;
                    mapa[nextFila][nextCol].recorrido = actual.recorrido;
                    pq.push(mapa[nextFila][nextCol]);
                    actual.recorrido-=mapa[nextFila][nextCol].altura;
                }
            }
        }
    }

    //cout<<endl;
    cout<<minDistance<<endl;
    return 0;
}
