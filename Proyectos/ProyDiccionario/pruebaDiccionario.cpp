#include <iostream>
#include <vector>

using namespace std;
int buscar(vector<int>& v, int incog, int desde, int hasta);

int main()
{
    int incognita = 5;
    vector<int> v = {1,2,3,4,5,6,7};

    cout << buscar(v, incognita, 0, v.size());
    return 0;
}

int buscar (vector<int>& v, int incog, int desde, int hasta)
{
    int total = desde+hasta;
    if (hasta==desde+1)
    {
        return -1;
    }

    if (incog == v[total/2])
    {
        return total/2;
    }

    if (incog < v[total/2])
    {
        return buscar(v, incog, desde, total/2);
    }
    else
    {
        return buscar(v, incog, total/2, hasta);
    }
}
