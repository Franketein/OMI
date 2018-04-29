#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class casilla
{
public:
    int valor;
    int fila;
    int columna;
    bool visitado = false;
};

int main()
{
    int F, C;
    cin >> F >> C;
    casilla mapa[F][C];
    for (int i = 0; i<F; i++)
    {
        for (int j = 0; j<C; j++)
        {
            mapa[i][j].fila = i;
            mapa[i][j].columna = j;
            cin >> mapa[i][j].valor;
        }
    }

    vector<int> crateres;
    //Buscar cráteres
    for (int i = 0; i<F; i++)
    {
        for (int j = 0; j<C; j++)
        {
            //Si es cráter y no ha sido visitado
            if (mapa[i][j].valor != 0 && mapa[i][j].visitado == false)
            {
                //DFS para recorrer todo el cráter
                int rocas = mapa[i][j].valor;
                queue<casilla> Q;
                mapa[i][j].visitado = true;
                Q.push(mapa[i][j]);

                while (Q.size() > 0)
                {
                    casilla casillaActual = Q.front();
                    casillaActual.visitado = true;
                    Q.pop();
                    rocas += casillaActual.valor;
                    int fil = casillaActual.fila;
                    int col = casillaActual.columna;

                    //Revisar cada vecino
                    for (int a = -1; a<=1; a++)
                    {
                        if (fil+a > F || fil+a<0)
                            continue;

                        for (int b = -1; b<=1; b++)
                        {
                            if (col+b > C || col+b<0 || (a==0 && b==0))
                                continue;

                            //Vecino con rocas y no visitado
                            casilla vecino = mapa[fil+a][col+b];
                            if (vecino.visitado == false && vecino.valor != 0)
                            {
                                Q.push(vecino);
                            }
                        }
                    }
                }

                crateres.push_back(rocas);
            }
        }
    }

    int maximo = 0;
    int maximoIndex = 0;
    for (int i = 0; i<crateres.size(); i++)
    {
        if (crateres[i]>maximo)
        {
            maximo = crateres[i];
            maximoIndex = i;
        }
    }

    cout << maximoIndex << " " << maximo;
    return 0;
}
