#include <iostream>

using namespace std;

int main()
{
    string cad;
    cin >> cad;
    int tam = cad.size()-1;
    if (cad[0] == ')' || cad[tam] == '(') {
        cout << "NO";
        return 0;
    }
    int abren = 0;
    int cierran = 0;
    for (int i = 0; i < tam+1; i++) {
        if (cad[i] == '(')
            abren++;
        else if (cad[i] == ')')
            cierran++;
    }
    if (abren == cierran)
        cout << "SI";
    else
        cout << "NO";
    return 0;
}
