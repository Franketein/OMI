#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long fila;
    cin >> fila;
    int n = 1;
    for (long long i = 0; i<=fila; i++)
    {
        cout<<n<<" ";
        //n = itoa(stoi(n)*(fila-i)/(i+1));
        n = n*(fila-i) / (i+1);
    }
    return 0;
}
