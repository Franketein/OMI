#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int matriz[n][n];
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            matriz[i-1][j-1] = (n*i)-n+j;
            cout<<matriz[i-1][j-1]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int resultado[n][n];
    for (int i = n-1; i>=0; i--)
    {
        for (int j = n-1; j>=0; j--)
        {
            resultado[i][j] = matriz[j][n-1-i];
            cout<<resultado[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
