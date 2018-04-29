#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string regurjitar (string pala) {
    int L = pala.length();
    if (L == 1) {
        return pala;
    } else if (L == 2) {
        char temp = pala[0];
        pala[0] = pala[1];
        pala[1] = temp;
        return pala;
    }
    int m = floor(L/3);
    string P1 = pala.substr(0, m);
    string P2 = pala.substr(m, L-2*m);
    string P3 = pala.substr(L-m, m);
    //cout << P2 << "|" << P3 << "|" << P1 << endl;
    return regurjitar(P2) + regurjitar(P3) + regurjitar(P1);
}

int main()
{
    string palabra;
    cin >> palabra;
    cout << regurjitar(palabra);
    return 0;
}
