#include <iostream>

using namespace std;

int diferencia(int capas)
{
    if (capas == 1)
        return 1;

    return diferencia(capas-1) + (capas+(capas-1));
}

int balas (int capas)
{
    int total = 0;
    for (int i = 1; i <= capas; i++)
    {
        total += diferencia(i);
    }
    return total;
}

int main()
{
    int capas;
    cin >> capas;
    cout<< balas(capas);
    return 0;
}
