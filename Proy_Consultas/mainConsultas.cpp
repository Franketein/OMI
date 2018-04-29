#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int lista[n];
    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }
    
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int tipo;
        cin >> tipo;
        int x, y;
        cin >> x >> y;
        if (tipo == 1) {
            lista[x] = y;
        } else if (tipo == 2) {
            int suma = 0;
            for (int j = x; j <= y; j++) {
                suma+=lista[j];
            }
            cout<<"Suma: "<<suma<<endl;
        }
        
        cout<<"Estado actual: ";
        for (int j = 0; j < n; j++) {
            cout<<lista[j]<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}

