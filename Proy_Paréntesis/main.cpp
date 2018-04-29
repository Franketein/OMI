#include <iostream>

using namespace std;

int main()
{
    string cadena;
    cin >> cadena;
    int abren = 0;
    int cierran = 0;

    if (cadena[0] == ")" || cadena[cadena.size()-1] == "(") {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < cadena.size(); i++) {
        if (cadena[i] == "(")
            abren++;
        else if (cadena[i] == ")")
            cierran++;
    }

    if (cierran == abren) {
        cout << "SI";
    } else {
        cout << "NO";
    }
    return 0;
}
