#include <iostream>
#include <vector>

using namespace std;

vector<bool> lista;
int fibos(int n) {
    int an = 1;
    int anMenos1=1;
    int anMenos2=0;
    for (int i = 2; i < n; i++) {
        int temp = an;
        an += anMenos1;
        anMenos2 = anMenos1;
        anMenos1 = temp;
    }
    return an;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        lista.push_back(true);
    }
    int i = 0;
    int cont = 0;
    while (i < n) {
        i = fibos(cont);
        if (i < n)
            lista[i] = false;
        cont++;
    }
    for (int i = 1; i < n; i++) {
        if (lista[i])
            cout<< i << " ";
    }
    return 0;
}
