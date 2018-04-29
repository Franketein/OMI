#include <iostream>
#include <queue>

using namespace std;

class casilla {
    public:
        int x = 0;
        int y = 0;
        int valor = 1;
};

int main()
{
    int M, N;
    cin >> M >> N;
    int matriz[M][N];
    for (int i = 0; i<M; i++)
    {
        for (int j = 0; j<N; j++)
        {
            matriz[i][j] = (i*N)+j;
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    queue<casilla> Q;
    casilla inicio;
    Q.push(inicio);
    while (!Q.empty())
    {
        int actual = Q.front();

    }
    return 0;
}
