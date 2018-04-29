#include <iostream>

using namespace std;

int main()
{
    int B, C, N;
    cin >> B >> C >> N;
    int resultado = 0;
    int congruencia = B%C;
    for (int i = 0; i<N; i++) {
        int A;
        cin >> A;
        if (A%C == congruencia) {
            resultado++;
        }
    }
    cout<<resultado;
    return 0;
}
