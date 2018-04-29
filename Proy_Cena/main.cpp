#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int preferencias[N];
    int started = 0;
    int cambios1 = 0;
    int cambios2 = 0;
    int obligatorios = 0;
    int lastSet = 0;
    for (int i = 0; i<N; i++) {
        int pref;
        cin >> pref;
        preferencias[i] = pref;
        if (started == 0) {
            if (pref == 1) {
                started = 1;
                cambios1++;
            } else
                obligatorios++;
        } else if (started == 1) {
            if (pref == 2) {
                started = 2;
                cambios2++;
            } else
                cambios1++;
        } else if (started == 2) {
            if (pref == 1) {
                started = 1;
                cambios1++;
                lastSet = 0;
            } else {
                cambios2++;
                lastSet++;
            }
        }
    }

    cambios2-=lastSet;
    //cout<<cambios1<<endl;
    //cout<<cambios2<<endl;
    cout<<min(cambios1, cambios2) + obligatorios;
    return 0;
}
