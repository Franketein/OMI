#include <iostream>

using namespace std;

int MCD (int a, int b)
{
    if (a%b==0)
        return b;

    return MCD(b, a%b);
}

int MCM (int a, int b)
{
    return a*b/MCD(a, b);
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int colores[n];
    for (int i = 0; i<n; i++)
    {
        cin >> colores[i];
    }
    int consultas;
    cin >> consultas;
    for (int i = 0; i<consultas; i++)
    {
        int num;
        cin >> num;
        int x = num%(n);

        int color = colores[x];
        bool estable = true;
        int vueltas = MCM(m, n);
        vueltas/=m;
        while (vueltas>0)
        {
            x += m%n;
            x %= n;
            //cout<<x<<" - "<<color<<" - "<<colores[x]<<endl;
            if (colores[x] != color)
            {
                estable = false;
                break;
            }
            vueltas--;
        }

        if (estable)
            cout<<"1";
        else
            cout<<"0";
    }

    return 0;
}
