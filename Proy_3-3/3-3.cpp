#include <iostream>

using namespace std;

int cuadrado (int x)
{
    if (x == 1)
        return 1;

    return cuadrado(x-1) + (x+x-1);
}

int main()
{
    int n;
    cin >> n;
    cout << cuadrado(n);
    return 0;
}
