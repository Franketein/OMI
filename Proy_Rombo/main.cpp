#include <iostream>

using namespace std;

int main()
{
    int tam;
    cin >> tam;

    int mitad = (tam-1)/2;
    for (int f = 0; f < tam; f++)
    {
        for (int col = 0; col < tam; col++)
        {
            if ((f < mitad && col < mitad-f) || (f < mitad && col > mitad+f) || (f > mitad && col < f-mitad) || (f > mitad && col > tam-(f-mitad+1)))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
