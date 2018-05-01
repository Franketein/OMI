#include <iostream>

using namespace std;
int factorial (int n);

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}

int factorial (int n)
{
    if (1==n)
        return 1;
    else
        return factorial(n-1)*n;
}
