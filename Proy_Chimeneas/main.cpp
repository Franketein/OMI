#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    float h;
    cin >> n >> h;
    vector<float> chimeneas;
    for (int i = 0; i<n; i++)
    {
        int altura;
        if (altura <= h)
            cin >> chimeneas[i];
    }

    int maxCasas = 0;
    for(int i = 0; i<n; i++)
    {
        float alturaRespaldo = h;
        if (chimeneas[i]>h)
            continue;
        int casas = 1;
        h = chimeneas[i];
        cout<< i<<" = ";
        for (int j = i+1; j<n; j++)
        {
            if (chimeneas[j]>h)
                continue;
            h = chimeneas[j];
            casas++;
            cout<<j<<",";
        }
        cout<<endl;
        if (casas > maxCasas)
            maxCasas = casas;
        h = alturaRespaldo;
    }

    cout<<maxCasas<<endl;
    return 0;
}
