#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    int relleno;

    cout << "Escribe tu nombre: " << endl;
    cin>>nombre;

    cout << "Cuanto relleno quieres?: " << endl;
    cin>>relleno;

    const string SALUDO = "!Hola, " + nombre + "!";
    const int FILAS = relleno * 2 + 3;
    const string::size_type COLUMNAS = SALUDO.size() + relleno * 2 + 2;

    cout<<endl;

    for (int f = 0; f != FILAS; f++)
    {
        string::size_type c = 0;

        while (c != COLUMNAS)
        {
            if (f == relleno + 1 && c == relleno + 1)
            {
                cout << SALUDO;
                c += SALUDO.size();
            }
            else
            {
                if (f == 0 || f == FILAS - 1 || c == 0 || c == COLUMNAS - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                c++;
            }
        }
        cout << endl;
    }
    return 0;
}
