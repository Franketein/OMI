#include <iostream>
#include <string>

using namespace std;


long long divisores(long long n)
{
    long long total = 0;
    long long extras = 0;
    if (n%2 == 0)
        extras = 2;
    else
        extras = 1;

    for (long long i = 1; i<n/2; i++)
    {
        if (n%i == 0)
        {
            total++;
            //cout<<i<< " " <<total<<endl;
        }
    }
    return total + extras;
}

int main()
{
    string cadena;
    cin >> cadena;
    long long valor = 0;
    for (long long i = 0; i<cadena.size(); i++)
    {
        char c=toupper(cadena[i]);
        valor+=c+0;
    }

    cout<<divisores(valor)<<endl;

    return 0;
}
