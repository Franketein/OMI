#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int matriz[N][N];
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            matriz[i][j] = (i*N)+j;
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    int tam = N-1;
    int x = 0;
    int y = 0;
    int cambio = 1;
    while (tam >=0)
    {
        int j = 0;
        for (j = 0; j<tam; j++)
        {
            //cout<<y<<","<<x+j<<endl;
            cout<<matriz[y][j+x]<<" ";
        }
        x += j;

        for (j = 0; j<tam; j++)
        {
            //cout<<y+j<<","<<x<<endl;
            cout<<matriz[j+y][x]<<" ";
        }
        y += j;

        for (j = 0; j<tam; j++)
        {
            //cout<<y<<","<<x+j<<endl;
            cout<<matriz[y][x-j]<<" ";
        }
        x -= j;

        for (j = 0; j<tam; j++)
        {
            //cout<<y+j<<","<<x<<endl;
            cout<<matriz[y-j][x]<<" ";
        }
        y -= j;

        x++;
        y++;
        tam-=2;
    }

    if (N%2!=0)
        cout<<matriz[N/2][N/2];
    return 0;
}
