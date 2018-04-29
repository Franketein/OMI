#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int col, fil, p;
    cin >> fil >> col >> p;
    vector<int> respuestas;
    for (int i = 0; i < p; i++)
    {
        int pedido;
        cin>>pedido;
        int familia = pedido%fil;
        int primerFamiliar = familia;

        respuestas.push_back(pedido + (pedido%fil)*diferencia);
    }

    for (int i = 0; i<p; i++)
    {
        cout<<respuestas[i]<<endl;
    }
    return 0;
}
