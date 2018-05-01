#include <iostream>

using namespace std;
int dcmR(int m, int n);

int main()
{
    int x;
    int y;
    cin >> x >> y;
    cout << dcmR(x, y) << endl;
    return 0;
}

int dcmR (int m, int n)
{
    if (m == 0)
        return n;

    if (n == 0)
        return m;

    int c =  m%n;

    return dcmR(n, c);
}
