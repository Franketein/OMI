#include <iostream>

using namespace std;

int main()
{
    long long A, B, C, X, Y, Z;
    cin >> A >> B >> C >> X >> Y >> Z;
    if (A*B*C < X*Y*Z)
    {
        if ((A<=Y||A<=Z||A<=X) && (B<=Z||B<=Y||B<=X) && (C<=X||C<=Y||C<=Z))
            cout<<1;
        else
            cout<<0;
    } else
        cout<<0;
    return 0;
}
