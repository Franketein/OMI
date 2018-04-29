#include <iostream>
#include <vector>

using namespace std;

vector<int> matrushkas;
int n;

int cantidad (int actual)
{
    int total = 1;
    int sig = actual+1;
    for (int i = sig; i<n; i++)
    {
        if (matrushkas[i] > matrushkas[actual])
        {
            //cout<<i<<" > "<<actual<<endl;
            if (total < cantidad(i)+1)
                total = cantidad(i)+1;
        }
    }
    return total;
}

int main()
{
    cin >> n;
    for (int i =0; i<n; i++)
    {
        int temp;
        cin >> temp;
        matrushkas.push_back(temp);
    }
    int maximo = 0;
    for (int i =0; i<n; i++)
    {
        if (cantidad(i)>maximo)
            maximo = cantidad(i);
    }
    cout<<maximo;
    return 0;
}
