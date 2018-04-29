#include <iostream>

using namespace std;

int MCD (int a, int b) {
    if (a%b == 0)
        return b;

    return MCD(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout<< MCD(a, b);
    return 0;
}
