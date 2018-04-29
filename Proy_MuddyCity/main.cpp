#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class edge {
public:
    int w;//peso
    int u;//vértice origen
    int v;//vértice destino

    bool operator < (const edge& str) const
    {
        return (w < str.w);
    }
};

vector<int> parents;
vector<int> ranks;
vector<edge> E;//Todas las aristas posibles
int N;
int casas;

int Find(int a)
{
    if (parents[a] == a)
    {
        return a;
    }
    else
    {
        parents[a] = Find(parents[a]);
        return parents[a];
    }
}

bool Union(int index)
{
    int x2 = Find(E[index].u);
    int y2 = Find(E[index].v);

    //Si no se hace ciclo unirlas
    if (x2!=y2)
    {
        if (ranks[x2] > ranks[y2])
        {
            ranks[x2] += ranks[y2];
            parents[y2] = x2;
        }
        else
        {
            ranks[y2] += ranks[x2];
            parents[x2] = y2;
        }
        return true;
    }
    return false;
}

int main()
{
    cout<<"Introduce el número de casas y el número de calles"<<endl;
    cin >> casas >> N;//Número de aristas
    for (int i = 0; i<casas; i++)
    {
        parents.push_back(i);
        ranks.push_back(1);
    }

    cout<<"Intriduce todas las aristas con el formato \"w, u, v\", siendo w el peso, u el origen y v el destino"<<endl;
    for (int i = 0; i<N; i++)
    {
        edge arista;
        cin>> arista.w >> arista.u >> arista.v;
        E.push_back(arista);
    }

    vector<edge> MST;
    sort(E.begin(), E.end());
    for (int i = 0; i<N; i++)
    {
        if (Union(i))
        {
            MST.push_back(E[i]);
        }
    }

    int total = 0;
    cout<<"Aristas usadas( 'origen' --> 'destino', Peso: 'peso'):"<<endl;
    for (int i = 0; i<MST.size(); i++)
    {
        cout<<MST[i].u <<" ---> "<<MST[i].v<<", Peso: "<<MST[i].w<<endl;
        total += MST[i].w;
    }
    cout <<endl;
    cout<<"Costo Total: "<<total<<endl;
    return 0;
}
