#include <iostream>

using namespace std;

int main()
{
    int B, C, N;
    cin >> B >> C >> N;
    int mod = B%C;
    int cantidad = 0;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (A%C == mod) {
            cantidad++;
        }
    }
    cout << cantidad;
    return 0;
}
