#include <iostream>

using namespace std;

int main()
{
    string palabra;
    cin >> palabra;
    int tam = palabra.size() - 1;
    bool palindrome = true;
    for (int i = 0; i < (tam+1)/2; i++) {
        if (palabra[i] != palabra[tam-i]) {
            palindrome = false;
            break;
        }
    }
    if (palindrome) {
        cout << "Si";
    } else {
        cout << "No";
    }
    return 0;
}
