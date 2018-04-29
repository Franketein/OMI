#include <iostream>
#include <queue>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    queue<int> Q;
    for (int i = 1; i<=n; i++)
    {
        Q.push(i);
    }

    long long contador = 0;
    long long total = 0;
    while (!Q.empty())
    {
        contador %= k+1;
        if (contador == k)
        {
            if (Q.front() == 1)
                break;
            //cout<<Q.front()<<endl;
            total++;
            Q.pop();
        }
        else
        {
            Q.push(Q.front());
            Q.pop();
        }
        contador++;
    }

    cout<<total;
    return 0;
}
