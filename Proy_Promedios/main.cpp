#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int calificaciones[n][m];
    for (int i = 0; i< n; i++) {
        for (int j= 0; j<m; j++) {
            cin >> calificaciones[i][j];
        }
    }
    int p;
    cin >> p;
    int resultados[p];
    for (int i = 0; i<p; i++) {
        int a, b, q, r;
        cin >> a >> b >> q >> r;
        int prom = 0;
        int cuenta = 0;

        for (int i = a-1; i<b; i++) {
            for (int j = q-1; j<r; j++) {
                prom+=calificaciones[i][j];
                cuenta++;
            }
        }
        resultados[i] = prom/cuenta;
    }

    for (int i = 0; i < p; i++) {
        cout << resultados[i] <<endl;
    }
    return 0;
}
