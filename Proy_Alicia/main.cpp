#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m;
    int chapas[m];
    for (int i = 0; i<m; i++)
    {
        cin >> chapas[i];
    }
    cin >> n;
    int respuestas[n] = {0};
    for (int i = 0; i<n; i++)
    {
        int llave;
        cin >> llave;
        int inf = 0;
        int sup = m-1;
        int mitad = (inf+sup)/2;
        while (inf <= sup)
        {
            mitad = (inf+sup)/2;
            if (chapas[mitad] == llave)
            {
                respuestas[i] = mitad+1;
                break;
            }
            if (chapas[mitad] > llave)
            {
                sup = mitad-1;
            }
            else
            {
                inf = mitad+1;
            }
        }
    }

    for (int i = 0; i<n; i++)
    {
        cout<<respuestas[i]<<" ";
    }
    return 0;
}
