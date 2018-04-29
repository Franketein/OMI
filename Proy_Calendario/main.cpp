#include <iostream>

using namespace std;

int main()
{
    int semana, dias;
    cin >> semana >> dias;
    int diaActual = 1;
    cout<<"Sun Mon Tue Wed Thr Fri Sat";
    for (int i = 0; i<dias+1+(semana-1); i++) {
        if (i < semana) {
            cout<<"    ";
        } else {
            if (diaActual < 10) {
                cout << "  " << diaActual;
                if (i%7 != 0)
                    cout<<" ";
            } else {
                cout << " " << diaActual;
                if (i%7 != 0)
                    cout<<" ";
            }
            diaActual++;
        }
        if (i%7 == 0)
            cout<<endl;
    }
    return 0;
}
