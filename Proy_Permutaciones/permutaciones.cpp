#include <iostream>
#include <cstring>

using namespace std;

void permutaciones (string cad, int inicio, int largo)
{
    if (inicio == largo-1)
        cout<<cad<<endl;

    for (int i = inicio; i<largo; i++)
    {
        char temp = cad[inicio];
        cad[inicio] = cad[i];
        cad[i] = temp;
        permutaciones(cad, inicio+1, largo);
        temp = cad[inicio];
        cad[inicio] = cad[i];
        cad[i] = temp;
    }
}

int main()
{
    string cadena;
    cin >> cadena;
    permutaciones(cadena, 0, cadena.size());
    return 0;
}
