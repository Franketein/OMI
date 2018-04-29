#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int lista[N];
    int K;
    for (int i = 0; i < N; i++) {
        cin >> lista[i];
    }
    cin >> K;

    for (int i = 0; i < N; i++) {
        if (lista[i] <= K+3 && lista[i] >= K-3)
            cout << lista[i] << " ";
    }
    return 0;
}
