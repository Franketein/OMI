#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> m;
        switch (m)
        {
            case 1:
                int x;
                cin >> x;
                cout<<abs(x)<<endl;
                break;
            case 2:
                int a, b;
                cin >> a >> b;
                cout<<max(a, b)<<endl;
                break;
            case 3:
                int c, d;
                cin >> c >> d;
                cout<<min(c, d)<<endl;
                break;
            case 4:
                int e;
                cin >> e;
                cout << fixed << setprecision(2) << (double)sqrt(double(e))<<endl;
                break;
            case 5:
                int f, g;
                cin >> f >> g;
                cout<<pow(f, g)<<endl;
                break;
        }
    }
    return 0;
}
