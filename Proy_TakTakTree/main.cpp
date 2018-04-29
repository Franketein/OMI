#include <iostream>

using namespace std;

int main()
{
    int f;
    cin >> f;
    int a = 2;
    if (f%2 != 0) {
        a = 3;
    }
    int dias = 0;
    for (int i = a; i<f; i++) {
        if (f%11 == 1) {
            dias = i;
            break;
        }
        f*=2;
    }
    cout << dias-a << " " << f;
    return 0;
}
