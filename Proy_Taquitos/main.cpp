#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> fila;
    int vendidos = 0;
    int resultados[N] = {0};
    int numResultados = 0;
    for (int i = 0; i < N; i++) {
        int operacion = 0;
        cin >>operacion;
        if (operacion == 1) {
            int t = 0;
            cin >> t;
            fila.push_back(t);
        } else if (operacion == 2) {
            if (fila.size() > 0) {
                vendidos += fila[0];
                fila.erase(fila.begin());
            }
        } else if (operacion == 3) {
            resultados[numResultados] = fila.size();
            numResultados++;
        } else if (operacion == 4) {
            resultados[numResultados] = vendidos;
            numResultados++;
        }
    }

    for (int i = 0; i < numResultados; i++) {
        cout << resultados[i] <<endl;
    }
    return 0;
}
