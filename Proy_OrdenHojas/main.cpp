#include <iostream>
#include <algorithm>

using namespace std;

int n;

void determinar (int numeros[], int inf, int sup)
{
    if (inf >= sup)
    {
        if (numeros[inf] != -1 && inf >= 0 && inf < n)
        {
            cout<<numeros[inf]<<" ";
        }
        return;
    }

    int mitad = (sup-inf)/2;
    cout<<numeros[mitad+inf]<<" ";
    numeros[mitad+inf] = -1;
    //cout<<"\""<<numeros[mitad+inf]<<"\""<<" ("<<inf<<","<<sup<<")"<<endl;
    determinar(numeros, inf, sup-mitad-1);
    determinar(numeros, inf+mitad+1, sup);
}

int main()
{
    cin>>n;
    int arreglo[n];
    for (int i = 0; i<n; i++)
    {
        cin >> arreglo[i];
    }
    sort(arreglo, arreglo+n);
    determinar(arreglo, 0, n);
    return 0;
}
