#include <iostream>
#include <string>

using namespace std;

void imprimirLinea(string cad)
{
    for (int i =0; i<cad.size(); i++)
    {
        int number = 0;
        int digitos = 0;
        while (isdigit(cad[i+digitos]))
        {
            number *= 10;
            number += cad[i]-'0';
            digitos++;
        }
        char caracter = cad[i+digitos];
        for (int j = 0; j<number; j++)
        {
            cout<< caracter;
        }
    }
    cout<<endl;
}

int main()
{
    string fila1;
    string fila2;
    string fila3;
    string fila4;
    string fila5;

    getline(cin, fila1);
    getline(cin, fila2);
    getline(cin, fila3);
    getline(cin, fila4);
    getline(cin, fila5);

    imprimirLinea(fila1);
    imprimirLinea(fila2);
    imprimirLinea(fila3);
    imprimirLinea(fila4);
    imprimirLinea(fila5);

    return 0;
}
