#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class estado{
public:
    char valor;
    int fil = 0;
    int col = 0;
    bool visitado = false;
};

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    estado original[n][n];
    estado matriz[n][n];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            estado temporal;
            temporal.fil = i;
            temporal.col = j;
            cin>>temporal.valor;
            temporal.visitado = false;
            original[i][j] = temporal;
            matriz[i][j] = temporal;
        }
    }
    queue<estado> Q;
    Q.push(matriz[0][0]);
    while (!Q.empty())
    {
        estado actual = Q.front();
        Q.pop();
        if (matriz[actual.fil][actual.col].visitado == false)
            cout<<actual.valor<<" ";
        int fila = actual.fil;
        int colu = actual.col;
        matriz[fila][colu].visitado = true;
        //Este
        if (colu + 1 < n && matriz[fila][colu+1].visitado == false)
        {
            Q.push(matriz[fila][colu+1]);
        }

        //Sur
        if (fila + 1 < n && matriz[fila+1][colu].visitado == false)
        {
            Q.push(matriz[fila+1][colu]);
        }

        //Oeste
        if (colu - 1 >= 0 && matriz[fila][colu-1].visitado == false)
        {
            Q.push(matriz[fila][colu-1]);
        }

        //Norte
        if (fila - 1 >= 0 && matriz[fila-1][colu].visitado == false)
        {
            Q.push(matriz[fila-1][colu]);
        }
    }

    cout<<endl;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            matriz[i][j] = original[i][j];
        }
    }

    stack<estado> S;
    S.push(matriz[0][0]);
    while (!S.empty())
    {
        estado actual = S.top();
        S.pop();
        if (matriz[actual.fil][actual.col].visitado == false)
            cout<<actual.valor<<" ";
        int fila = actual.fil;
        int colu = actual.col;
        matriz[fila][colu].visitado = true;
        //Este
        if (colu + 1 < n && matriz[fila][colu+1].visitado == false)
        {
            S.push(matriz[fila][colu+1]);
        }

        //Sur
        if (fila + 1 < n && matriz[fila+1][colu].visitado == false)
        {
            S.push(matriz[fila+1][colu]);
        }

        //Oeste
        if (colu - 1 >= 0 && matriz[fila][colu-1].visitado == false)
        {
            S.push(matriz[fila][colu-1]);
        }

        //Norte
        if (fila - 1 >= 0 && matriz[fila-1][colu].visitado == false)
        {
            S.push(matriz[fila-1][colu]);
        }
    }

    return 0;
}
