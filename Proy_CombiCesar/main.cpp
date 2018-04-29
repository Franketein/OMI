#include <iostream>
#include <cmath>

using namespace std;

const int VISITADO = -1;
int cerros[500][500] = {VISITADO};
int n = 0;

int Recorrer(int fila, int col, int costo)
{
    int visitadosTotales = 1;
    int valor = cerros[fila][col];
    cerros[fila][col] = VISITADO;
    for (int i = -1; i<=1 && fila+i>=0 && fila+i<n; i++)
    {
        for (int j = -1; j<=1 && col+j>=0 && col+j<n; j++)
        {
            if (i == 0 && j == 0)
                continue;

            if (cerros[fila+i][col+j] != VISITADO && valor+costo<=cerros[fila+i][col+j])
            {
                visitadosTotales+=Recorrer(fila+i, col+j, costo);
            }
        }
    }
    return visitadosTotales;
}

int main()
{
    cin >> n;
    int inf = 0;
    int sup = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin >> cerros[i][j];
            if (cerros[i][j] > sup)
                sup = cerros[i][j];
        }
    }
    int nodosVisitados = 0;
    int mitad = 0;
    while (inf < sup)
    {
        mitad = (inf+sup)/2;
        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                if (cerros[i][j] != VISITADO && cerros[i][j] <= mitad)
                {
                    nodosVisitados = Recorrer(i, j, mitad);
                }
            }
        }

        if (nodosVisitados>=(n*n)/2)
            sup = mitad-1;
        else
            inf = mitad+1;
    }
    cout<<mitad<<endl;
    return 0;
}
