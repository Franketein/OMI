#include <iostream>

using namespace std;
int miMin(int a, int b);

int main()
{
    int a;
    int b;
    cin >> a >> b;

    cout << miMin(a, b);

    return 0;
}

int miMin (int a, int b)
{
    if (a >= b)
        return b;

    return a;
}
