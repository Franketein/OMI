#include <iostream>
#include <vector>

using namespace std;

vector<long long> pizzas;

long long vistaCamara()
{
    long long avistadas = 0;
    long long maxDiametro = 0;
    for (long long i = pizzas.size()-1; i>=0; i--)
    {
        if (pizzas[i]>maxDiametro)
        {
            avistadas++;
            maxDiametro = pizzas[i];
        }
    }
    //cout<<endl;
    return avistadas;
}

int main()
{
    long long N;
    cin >> N;
    vector<long long> respuestas;
    for (long long i = 0; i<N; i++)
    {
        long long cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            respuestas.push_back(vistaCamara());
        }
        else if (cmd == 1)
        {
            long long d;
            cin >> d;
            pizzas.push_back(d);
        }
        else if (cmd == 2)
        {
            long long q;
            cin >> q;
            pizzas.erase(pizzas.end()-q, pizzas.end());
        }
    }

    for (long long i = 0; i<respuestas.size(); i++)
    {
        cout<<respuestas[i]<<endl;
    }
    return 0;
}
