#include <iostream>
#include <string>

using namespace std;

long long fibRapido(long long n) {
    unsigned long long an = 1;
    unsigned long long anMenos1=1;
    unsigned long long anMenos2=0;
    for (unsigned long long i = 2; i < n; i++) {
        unsigned long long temp = an;
        an += anMenos1;
        anMenos2 = anMenos1;
        anMenos1 = temp;
    }
    return an;
}

int main()
{
    unsigned long long n;
    cin >> n;
    n = fibRapido(n);
    string num = to_string(n);
    cout << n%1000 << "    " << num[num.length()-1];
    return 0;
}
