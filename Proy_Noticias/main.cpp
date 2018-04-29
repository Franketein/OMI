#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> parents;
vector<int> ranks;
int N;

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

void Union(int x, int y)
{
    int x2 = Find(x);
    int y2 = Find(y);

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
    }
}

/*int Noticia(int p)
{
    int padre = Find(p);
    int total = 0;
    for (int i = 0; i<N; i++)
    {
        if (Find(i) == padre)
        {
            total++;
        }
    }
    return total;
}*/

int main()
{
    int I;
    cin >> N >> I;
    vector<int> respuestas;
    for (int i = 0; i<N; i++)
    {
        parents.push_back(i);
        ranks.push_back(1);
    }
    for (int i = 0; i<I; i++)
    {
        char instruccion;
        cin >> instruccion;
        if (instruccion == 'A')
        {
            int x, y;
            cin >> x >> y;
            Union(x, y);
        }
        else if (instruccion == 'E')
        {
            int p;
            cin >> p;
            int parent = Find(p);
            //respuestas.push_back(Noticia(p));
            respuestas.push_back(ranks[parent]);
        }
    }
    for (int i = 0; i<respuestas.size(); i++)
    {
        cout<<respuestas[i]<<endl;
    }
    return 0;
}
