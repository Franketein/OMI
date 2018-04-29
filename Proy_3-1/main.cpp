#include <iostream>

using namespace std;

int power(int x, int k)
{
    if (k <= 0)
        return 1;

    return x*(power(x, k-1));
}

int main()
{
    int base, exponente;
    cin >> base >> exponente;
    cout<< power(base, exponente);
    return 0;
}
