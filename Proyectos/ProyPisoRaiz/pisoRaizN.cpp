#include <iostream>

using namespace std;
int piso (int x);

int main()
{
    int n;
    cout << "Escribe un entero n: ";
    cin >> n;
    cout << "El valor aproximado o igual a la raiz cuadrada de n es: " << piso (n);
    return 0;
}

int piso (int x)
{
    int resultado = 1;
    while (resultado*resultado < x)
    {
        resultado += 1;
    }

    return resultado - 1;
}
