#include <iostream>

using namespace std;

long long unsigned fibonacci(int n)
{
    long long unsigned val = 1;
    long long unsigned prev = 1;

    if(n == 0)
        return prev;

    while (n > 1) {
        n--;
        long long unsigned temp = val;
        val+=prev;
        prev = temp;
    }

    return val;
}

int main()
{
    int n;
    cin >> n;
    long long unsigned total = 1;
    for (int i = 0; i<n-1; i++)
    {
        total+=fibonacci(i);
    }
    cout<<total;
    return 0;
}
