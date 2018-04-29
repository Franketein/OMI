/*
  Escribe un programa que calcule la edad del usuario en el año 2037.
  Entrada :  La edad del usuario
  Salida   : La edad actual del usuario seguida de su edad en el año 2037

  Del enunciado podemos ver lo siguiente:
   un numerito que no cambia,
   se tiene que calcular la edad del usuario en el año 2037 ¿Cómo se calcula esto?
   escribir la salida.
*/

#include <iostream>
using namespace std;
int main()
{
   // Declaramos constantes.
   const int FUTURO = 2037;
   const int ACTUAL = 2017;
   //Declaramos las variables necesarias. Necesitamos 2: adadActual y edadFutura
   int edadActual = 0; // Observa que las inicializamos en 0)
   int edadFutura = 0;

   //Se lee la edad actual
   cin >> edadActual;
   //¿Cómo se calcula? Así:
   edadFutura = edadActual + (FUTURO - ACTUAL);

   //Observa que:
   //edadFutura = edadActual + (FUTURO - ACTUAL); es una instrucción de asignación
   //Formada por la expresión edadActual + (FUTURO - ACTUAL);
   //El operador de asignación "="
   //La variable a la que se le asigna el valor de la expresión


   // Mostramos el resultado
   cout << "Mi edad actual es " << edadActual << endl;
   cout << "En el año " << FUTURO << " tendré " << edadFutura << endl;

   return 0;
}

/*
 Escribe una lista de al menos 6 formas de usar el operador de asignación: =, /=
 faltan 4
 */

 /*
  Escribe una lista de operadores aritméticos y lógicos
  */

