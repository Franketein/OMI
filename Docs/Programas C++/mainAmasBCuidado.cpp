//mainAmasBCuidado
#include <iostream>
using namespace std;

int main()
{
    short a = 32000;
    short b = 32000;
    short aMasB = 0; // Lo inicializamos (en cero) para saber con certeza lo que que
                     // se guarda en esa variable
    cout << "A = " << a << " B = " << b << " A mas B = " << aMasB << endl; //�Todo bien?
    aMasB = a + b;
    cout << "A = " << a << " B = " << b << " A mas B = " << aMasB << endl; //�Nada raro?

    //La respuesta es f�cil: todo est� en las matem�ticas (aritm�tica) de los tipos
    //de datos. Asi que: Explica, con tus propias palabras,lo que pas�.
    //�Podr�a ser importante en la competencia? Explica.

    return 0;
}
