#include <iostream>
#include <vector>

using namespace std;

void imprimirVector(vector<vector<int>> matriz, int tam)
{
    for (int i = 0; i<tam; i++)
    {
        for (int j = 0; j<tam; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matriz;
    for (int i = 1; i<=n; i++)
    {
        vector<int> fila;
        for (int j = 1; j<=n; j++)
        {
            fila.push_back(n*i-n+j);
        }
        matriz.push_back(fila);
    }
    imprimirVector(matriz, n);


    vector<vector<int>> resultado;
    for (int i = 0; i<n; i++)
    {
        vector<int> fila;
        for (int j = 0; j<n; j++)
        {
            //fila.push_back(matriz[j][n-1-i]);
            fila.push_back(matriz[n-j-1][i]);
        }
        resultado.push_back(fila);
    }
    imprimirVector(resultado, n);
    return 0;
}
