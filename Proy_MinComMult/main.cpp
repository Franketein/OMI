#include <iostream>

using namespace std;

int MCD (int a, int b) {
    if (a%b == 0)
        return b;

    int temp = a;
    a = b;
    return MCD(b, temp%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a*b/MCD(a, b);
    return 0;
}
