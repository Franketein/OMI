#include <iostream>

using namespace std;

int main()
{
    int f;
    cin >> f;
    int dias = 0;
    while (f%11 != 1) {
        dias++;
        f*=2;
    }
    cout << dias << " " << f;
    return 0;
}
