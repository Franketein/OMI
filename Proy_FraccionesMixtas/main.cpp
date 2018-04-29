#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a = n/m;
    n = n%m;
    cout << a;
    if (n !=0)
        cout<<" "<<n <<"/" <<m<<endl;
    return 0;
}
