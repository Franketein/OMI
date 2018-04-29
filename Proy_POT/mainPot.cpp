#include <iostream>

using namespace std;

int pot(int a, int b)
{
    int temp;
    if( b == 0)
        return 1;

    temp = pot(a, b/2);
    if (b%2 == 0)
        return temp*temp;
    else
        return a*temp*temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout<< pot(a, b);
    return 0;
}
