#include <iostream>

using namespace std;

long long MCD (long long a, long long b)
{
    if (a%b == 0)
        return b;
    else
        return MCD(b, a%b);
}

int main()
{
    long long N;
    cin >> N;
    long long a, b;
    for (long long i = 0; i<N; i++)
    {
        cin >> a >> b;
        long long mcd = MCD(a, b);
        cout<<a/mcd<<" "<<b/mcd<<"\n";
    }

    return 0;
}
