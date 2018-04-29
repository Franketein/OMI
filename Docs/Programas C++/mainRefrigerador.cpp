#include <iostream>

using namespace std;

int main()
{
    //Declaración de constantes y variables.
    const float TASA_ENFRIAMIENTO = -5;

    //Temperaturas inicial y final
    float tFinal;
    float tInicial;
    float tiempo; //Tiempo transcurrido desde que se inició la medición

    // Leemos las temperaturas final e inicial
    cout << "Escribe la temperatura final: " ;
    cin >> tFinal;
    cout << "Escribe la temperatura inicial: ";
    cin >> tInicial;

    //Calculamos lo que se nos pide. Recordamos que la fórmula original es
    // TF = TI + (-5)*t. Entonces t = (TF - TI)/(-5)
    tiempo = (tFinal - tInicial)/TASA_ENFRIAMIENTO;
    cout << " El tiempo requerido es: " << tiempo << " min" << endl;
    return 0;
}
