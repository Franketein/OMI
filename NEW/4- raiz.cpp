#include <iostream>
#include <string>

using namespace std;

double sacarRaiz (int x)
{
    double raiz = x/2;

    float cambio = 1;
    int contador = 0;
    int cambioActual = -1;
    while (raiz*raiz != x && contador < 1000)
    {
        if (raiz*raiz > x)
        {
            if (cambioActual == 0)
            {
                cambio /= 10;
            }
            raiz -= cambio;
            cambioActual = 1;
        }
        else
        {
            if (cambioActual == 1)
            {
                cambio /= 10;
            }
            raiz += cambio;
            cambioActual = 0;
        }
        contador++;
    }
    return raiz;
}

int main()
{
    int N;
    cin >> N;

    cout << sacarRaiz(N);

 	return 0;
}
