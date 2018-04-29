#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cants[m] = {0};
    for (int i = 0; i < n; i++) {
        int tipo;
        cin >> tipo;
        cants[tipo-1] += 1;
    }

    for (int i = 0; i < m; i++) {
        cout << cants[i] << " ";
    }
    return 0;
}
