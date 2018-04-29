#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int cajas[N];
    for (int i = 0; i<N; i++)
    {
        cin >> cajas[i];
    }
    int maximo = 0;
    for (int i = 0; i<N; i++)
    {
        int kCajas = cajas[i];
        for (int j = i+1; j<N && j<i+K; j++)
        {
            kCajas+=cajas[j];
        }

        if (kCajas > maximo)
            maximo = kCajas;
    }
    cout<<maximo<<endl;
    return 0;
}
