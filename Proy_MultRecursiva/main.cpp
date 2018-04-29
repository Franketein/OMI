#include <iostream>

using namespace std;

const int N = 100;
int memoria[N][N]={-1};

int multiplicar (int x, int y)
{
    if (y == 0 || x == 0)
        return 0;

    if (memoria[x][y] != -1)
        return memoria[x][y];

    memoria[x][y] = x + multiplicar(x, y-1);
    return memoria[x][y];
}

int main()
{
    int a, b;
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            memoria[i][j] = -1;
        }
    }
    cin >> a >> b;
    cout<< multiplicar(a, b);
    return 0;
}
