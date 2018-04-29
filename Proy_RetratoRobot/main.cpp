#include <iostream>
#include <string>

using namespace std;

int main()
{
    string filas[5];
    for (int i = 0; i<5; i++)
    {
        string temp;
        getline(cin, filas[i]);
        cin.clear();
    }
    cout<<"hola";
    int currFila = 0;
    for (int i = 0; i<filas[currFila].size(); i++)
    {
        if (currFila>=5)
            break;

        int number = 0;
        int digitos = 0;
        while (isdigit(filas[currFila][i]))
        {
            number *= 10;
            number += filas[currFila][i]-'0';
            digitos++;
        }
        char caracter = filas[currFila][i+number];
        for (int j = 0; j<number; j++)
        {
            cout<< caracter;
        }
        cout<<endl;
        currFila++;
    }
    return 0;
}

/*#include <iostream>

using namespace std;

int main()
{
    string hola;
    getline(cin, hola);
    cout<<hola;
    return 0;
}*/

