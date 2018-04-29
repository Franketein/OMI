#include <iostream>

using namespace std;

int main()
{
    long long n = 1000001;
    bool lista[n-2];
    for (int i =0; i<n-2; i++) {
        lista[i] = true;
    }
    for(int i =2; i<n-2; i++) {
        if ((i%2==0 && i!=2) || (i%3==0 && i!=3)) {
            continue;
        }
        if (lista[i-2] == true) {
            int remover = 0;
            if (i>3)
                remover=4;
            else
                remover=2;
            while (remover*i<n) {
                lista[remover*i-2] = false;
                //cout<<remover*i-2<<endl;
                remover++;
            }
        }
    }

    int k;
    cin>>k;
    int entradas[k];
    for (int i = 0; i<k; i++) {
        cin >> entradas[i];
    }

    for (int i = 0; i<k; i++) {
        if (lista[entradas[i]-2] == true) {
            cout<<"SI"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
