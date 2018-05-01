#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;
void intercambia(int& x, int& y);
void print(vector<int> a);
void rand_seed();
int randInt (int a, int b);
int posDelMinimo(vector<int>& a, int desde, int hasta);
void ordSeleccion(vector<int>& a);

int main()
{

    vector<int> v(20);
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = randInt(1,100);
    }
    print(v);
    ordSeleccion(v);
    print(v);
    return 0;
}

int posDelMinimo(vector<int>& a, int desde, int hasta)
{
    int posDelMin = desde;
    int i;
    for (i = desde + 1; i <= hasta; i++)
        if (a[i] < a[posDelMin]) posDelMin = i;
    return posDelMin;
}

void intercambia (int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void ordSeleccion(vector<int>& a)
{
    int sig;

    for (sig = 0; sig < a.size() - 1; sig++)
    {
        int posDelMin = posDelMinimo(a, sig, a.size() - 1);
        if (posDelMin != sig)
            intercambia(a[posDelMin], a[sig]);
    }
}

void print (vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
        cout<< a[i] << " ";
    cout<< "\n";
}

void rand_seed ()
{
    int seed = static_cast<int>(time(0));
    srand(seed);
}

int randInt (int a, int b)
{
    return a + rand() % (b - a + 1);
}
