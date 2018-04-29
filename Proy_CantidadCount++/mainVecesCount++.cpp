#include <iostream>
using namespace std;

int main ()
{
    cout<<"Se ejecuta [n*(n-1)]/2 veces"<<endl;
    int N;
    cin >> N;
    cout<<"Se ejecuta ["<<N<<"*("<<N-1<<")]/2 veces"<<endl;
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            count++;
        }
    }
    cout<<"Se ejecuta "<<count<<" veces";
    return 0;
}
