//mainAmasBCuidado
#include <iostream>
using namespace std;

int main()
{
    short a = 32000;
    short b = 32000;
    short aMasB = 0; // Lo inicializamos (en cero) para saber con certeza lo que que
                     // se guarda en esa variable
    cout << "A = " << a << " B = " << b << " A mas B = " << aMasB << endl; //¿Todo bien?
    aMasB = a + b;
    cout << "A = " << a << " B = " << b << " A mas B = " << aMasB << endl; //¿Nada raro?

    //La respuesta es fácil: todo está en las matemáticas (aritmética) de los tipos
    //de datos. Asi que: Explica, con tus propias palabras,lo que pasó.
    //¿Podría ser importante en la competencia? Explica.

    return 0;
}
