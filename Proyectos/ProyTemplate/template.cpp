#include <iostream>

using namespace std;
template <typename T>
T maximo(T valor1, T valor2, T valor3)
{
    T valorMax = valor1;
    if (valor2 > valorMax)
        valorMax = valor2;
    if (valor3 > valorMax)
        valorMax = valor3;

    return valorMax;
}


int main()
{
    float a = 5.99;
    float b = 1.42;
    float c = 3.12;
    cout << maximo(a, b, c);
    return 0;
}

