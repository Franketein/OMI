#include <iostream>

using namespace std;

string resultados[999999] = {""};
long long unsigned numResult = 0;

string maneras (string cadena, int recorrido, int meta)
{
    if (recorrido == meta)
    {
        cout<<cadena<<endl;
        resultados[numResult] = cadena;
        numResult++;
        return "";
    }

    return maneras(cadena+"1", recorrido+1, meta);

    if (recorrido+2<=meta)
    {
        return maneras(cadena+"2", recorrido+2, meta);
    }

    if (recorrido+3<=meta)
    {
        return maneras(cadena+"3", recorrido+3, meta);
    }

    return "";
}

string maneras2 (string cadena, int recorrido, int meta)
{
    if (recorrido == meta)
    {
        cout<<cadena<<endl;
        resultados[numResult] = cadena;
        numResult++;
        return "";
    }

    if (recorrido+2<=meta)
    {
        return maneras(cadena+"2", recorrido+2, meta);
    }

    if (recorrido+3<=meta)
    {
        return maneras(cadena+"3", recorrido+3, meta);
    }

    return maneras(cadena+"1", recorrido+1, meta);
    return "";
}

string maneras3 (string cadena, int recorrido, int meta)
{
    if (recorrido == meta)
    {
        cout<<cadena<<endl;
        resultados[numResult] = cadena;
        numResult++;
        return "";
    }

    if (recorrido+3<=meta)
    {
        return maneras(cadena+"3", recorrido+3, meta);
    }

    if (recorrido+2<=meta)
    {
        return maneras(cadena+"2", recorrido+2, meta);
    }

    return maneras(cadena+"1", recorrido+1, meta);
    return "";
}

int main()
{
    int n;
    cin >> n;
    maneras("", 0, n);
    maneras2("", 0, n);
    maneras3("", 0, n);
    return 0;
}
