#include <iostream>
#include <algorithm>

using namespace std;

int rutas[1000000] = {0};

int main()
{
    int N, K;
    cin >> N >> K;
    int total = 0;
    for (int i = 0; i< N; i++)
    {
        int temp;
        cin >> temp;
        if (temp <= K)
            rutas[i] = temp;
        else
            total+=K;
    }

    if (rutas[0] != 0 && rutas[N-1] != 0)
    {
        if (rutas[N-1] < rutas[0])
        {
            rutas[0] = 0;
            total += rutas[n-1];
        }
        else
        {
            if (rutas[N-1] > rutas[N-2]) {
                rutas[N-1] = 0;
                total+= rutas[0];
            }
        }
    }

    for (int i = 0; i<N; i++)
    {
        total+=rutas[i];
    }
    cout<<total<<endl;
    return 0;
}
