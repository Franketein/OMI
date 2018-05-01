#include <iostream>

using namespace std;
long long factorial (int n);

int main()
{
    int num;
    cin>>num;

    cout << factorial(num);
    return 0;
}

long long factorial (int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
