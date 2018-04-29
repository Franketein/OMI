// min_element/max_element example
#include <iostream>     // std::cout
#include <algorithm>    // std::min_element, std::max_element

using namespace std;

int main () {
    int q;
    cin >> q;
    int values[q];
    int res[q][2];
    int resultados = 0;
    int cont = 0;
    for (int i = 0; i < q; i++) {
        int o = 0;
        int v = 0;
        cin >> o >> v;
        if (o == 1) {
            values[cont] = v;
            cont++;
        }
        else if (o == 2) {
            //cout << o << endl;
            bool encontrado = false;
            int totales = 0;
            while (encontrado == false) {
                int minimo = *min_element(values+totales,values+cont+1);
                for (int j = totales; j < cont; j++) {
                    if (values[j] <= minimo && values[j] > 0) {
                        int temp = values[totales];
                        values[totales] = values[j];
                        values[j] = temp;
                        totales++;
                    }
                }
                if (totales >= v) {
                    res[resultados][0] = minimo;
                    res[resultados][1] = totales;
                    //cout << minimo << " " << totales << endl;
                    resultados++;
                    encontrado=true;
                }
            }
        }
    }

    for (int i = 0; i < resultados; i++) {
        cout << res[i][0] << " " << res[i][1] << endl;
    }
    return 0;
}
