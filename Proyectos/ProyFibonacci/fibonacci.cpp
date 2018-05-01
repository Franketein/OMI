#include <iostream>

using namespace std;
int fibonacci(int n);

int main()
{
    int n;
    cin >> n;
    cout <<  fibonacci(n);
    return 0;
}

int fibonacci(int n)
{
    if (1==n || 2==n)
        return 1;
    else
        return fibonacci(n-2)+fibonacci(n-1);
}
