#include <iostream>

using namespace std;

void invierteUnaLista(const int lista[], int listaNueva[], int tam) {
    for (int i = 0; i < tam; i++) {
        listaNueva[i] = lista[tam-i-1];
    }
}

void escribeArreglo(const int lista[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout<<lista[i]<<", ";
    }
}

int main()
{
    int n;
    cin>>n;
    int lista[n];
    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }
    int listaNueva[n];

    invierteUnaLista(lista, listaNueva, n);
    escribeArreglo(listaNueva, n);

    return 0;
}
