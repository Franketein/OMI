#include <iostream>
using namespace std;

int main()
{
    int estaciones[] = {580, 980, 1190, 1250, 1420};
    int frecuencia;
    cin >> frecuencia;
    if (frecuencia >= 540 && frecuencia <= 1520) {
        for (int i = 0; i<5; i++) {
            if (frecuencia < estaciones[i]) {
                if (i == 0) {
                    cout << "adelante " << estaciones[i]-frecuencia;
                    break;
                } else {
                    if (((estaciones[i] - estaciones[i-1])/2+estaciones[i-1]) > frecuencia) {
                        cout << "atras " << frecuencia-estaciones[i-1];
                    } else {
                        cout << "adelante " << estaciones[i]-frecuencia;
                    }
                    break;
                }
            }
            if (frecuencia >= estaciones[4]) {
                cout << "atras " << frecuencia-estaciones[4];
                break;
            }
        }
    } else {
        cout << "error";
    }
    return 0;
}
