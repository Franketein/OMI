#include <iostream>

using namespace std;

long long fibonacci (long long n) {
    long long curr = 3;
    long long prev = 2;
    long long antant = 1;
    if ( n == 2)
        return 2;
    else if (n == 1)
        return 1;

    for (long long i = 3; i < n; i++) {
        long long temp = curr;
        curr += prev;
        antant = prev;
        prev = temp;
    }
    return curr;
}

int main()
{
    long long n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
