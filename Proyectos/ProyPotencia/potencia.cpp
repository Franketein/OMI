#include <iostream>

using namespace std;
int potencia(int a, int n);

int main()
{
    int n;
    int a;
    cin >> a >> n;
    cout << potencia(a, n);
    return 0;
}

int potencia (int a, int n)
{
    if (1==n)
        return a;
    else
        return a*potencia(a, n-1);
}
