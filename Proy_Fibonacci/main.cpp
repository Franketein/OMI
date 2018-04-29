#include <iostream>
#include <cassert>
using namespace std;

int fibRapido2(int n) {
    int an = 1;
    int anMenos1=1;
    int anMenos2=0;
    for (int i = 2; i < n; i++) {
        int temp = an;
        an += anMenos1;
        anMenos2 = anMenos1;
        anMenos1 = temp;
    }
    return an;
}

int fibRapido(int n)
{
    int val = 1;
    int prev = 0;

    if(n == 0)
        return prev;

    while (n > 1) {
        n--;
        int temp = val;
        val+=prev;
        prev = temp;
    }

    return val;
}

int fibLento (int n) {
    if (n <= 1)
        return n;
    return fibLento(n-1) + fibLento(n-2);
}

void probarSolucion (int n) {
    assert(fibRapido(3) == 2);
    assert(fibRapido(10) == 55);
    for (int n = 0; n < 0; n++) {
        assert(fibRapido(n) == fibLento(n));
    }
}

int main()
{
    int n = 0;
    cin>>n;
    cout<<fibRapido2(n);
    return 0;
}
