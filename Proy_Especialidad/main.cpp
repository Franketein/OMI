#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int valores[n];
    int contador=1;
    int max = 0;
    int maxVal = 0;
    for (int i = 0; i<n; i++) {
        cin>>valores[i];
    }

    for (int i = 0; i < n;) {
        int curr = valores[i];
        if (curr != maxVal) {
            for (int j = i+max; j < n; j++) {
                if (valores[i] == valores[j]) {
                    //cout<<"coinciden"<<i<<" " << valores[i] <<" "<<j<<" "<<valores[j]<<endl;
                    if ((j-i)+1>max) {
                        max=(j-i)+1;
                        //cout<<"cambio max="<<max<<endl;
                    }
                }
            }
        }
        i+=contador;
        contador=1;
    }
    cout<<max;
    return 0;
}
