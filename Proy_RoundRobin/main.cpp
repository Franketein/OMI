#include <iostream>
#include <queue>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int terminados[n];
    queue<pair<int, int> > Q;
    for (int i = 0; i<n; i++)
    {
        pair<int, int> proceso;
        cin >> proceso.first >> proceso.second;
        Q.push(proceso);
    }

    int numTerminados = 0;
    while (!Q.empty())
    {
        pair<int, int> procesoActual = Q.front();
        Q.pop();
        procesoActual.second -= k;
        if (procesoActual.second <= 0)
        {
            terminados[numTerminados] = procesoActual.first;
            numTerminados++;
        }
        else
        {
            Q.push(procesoActual);
        }
    }

    for (int i = 0; i<n; i++)
    {
        cout<<terminados[i]<<endl;
    }

    return 0;
}
