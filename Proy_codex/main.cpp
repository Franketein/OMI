#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int pasos (int inicio, string cadena)
{
    int total = 0;
    int tam = cadena.size();

    for (int j = inicio; j < tam; j++)
    {
        if (isdigit(cadena[j]))
        {
            int numero = cadena[j] - '0';
            total = total*10 + numero;
            //cout<<"numero en "<<j<< "es: "<<numero<<" total="<<total<<endl;
        }
        else
        {
            break;
        }
    }

    return total;
}

int main()
{
    string cad;
    int xi;
    int yi;

    cin>>xi;
    cin>>yi;
    cin>>cad;

    int xf = xi;
    int yf = yi;

    int tam = cad.size();

    for (int i = 0; i < tam; i++)
    {
        if (cad[i] == 'n')
        {
            yf += pasos(i+1, cad);
        }
        else if (cad[i] == 's')
        {
            yf -= pasos(i+1, cad);
        }
        else if (cad[i] == 'o')
        {
            xf -= pasos(i+1, cad);
        }
        else if (cad[i] == 'e')
        {
            xf += pasos(i+1, cad);
        }
    }

    cout<<"xf="<<xf<<endl;
    cout<<"yf="<<yf<<endl;

    cout<<"dist manhattan="<<abs(xf) + abs(yf)<<endl;
    cout<<"dist euclideana="<<sqrt(xf*xf + yf*yf)<<endl;

    return 0;
}
