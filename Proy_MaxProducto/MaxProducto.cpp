#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long numeros[n];
    for (long long i = 0; i<n; i++)
    {
        cin >> numeros[i];
    }

    /*long long maxInd = 0;
    long long segMaxInd = -1;
    for (long long i = 0; i<n; i++)
    {
        if (numeros[i] >= numeros[maxInd])
        {
            if (i!=0)
                segMaxInd = maxInd;
            maxInd = i;
        }
        else if (segMaxInd == -1 || numeros[i] > numeros[segMaxInd])
        {
            segMaxInd = i;
        }
    }*/
    sort(numeros, numeros + n);
    long long maxInd = n-1;
    long long segMaxInd = n-2;
    cout<<numeros[maxInd]*numeros[segMaxInd];
    return 0;
}
