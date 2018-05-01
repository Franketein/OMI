#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
bool esCorrecta (int intento, int valorCorrecto);
void juegaAAdivinar();

int main()
{
    srand(time(NULL));
    juegaAAdivinar();
    return 0;
}

void juegaAAdivinar()
{
    int intento;
    int valorCorrecto = rand() % 1000 + 1;
    bool correcta = false;
    while (!correcta)
    {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        correcta = esCorrecta(intento, valorCorrecto);
    }
}

bool esCorrecta(int intento, int valorCorrecto)
{
    if (intento == valorCorrecto)
    {
        return true;
    }
    else
    {
        if (intento > valorCorrecto)
            cout << "Muy Alto" << endl;
        else
            cout << "Muy Bajo" << endl;
    }
    return false;
}
