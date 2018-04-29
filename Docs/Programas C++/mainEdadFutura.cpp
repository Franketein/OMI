/*
  Escribe un programa que calcule la edad del usuario en el a�o 2037.
  Entrada :  La edad del usuario
  Salida   : La edad actual del usuario seguida de su edad en el a�o 2037

  Del enunciado podemos ver lo siguiente:
   un numerito que no cambia,
   se tiene que calcular la edad del usuario en el a�o 2037 �C�mo se calcula esto?
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
   //�C�mo se calcula? As�:
   edadFutura = edadActual + (FUTURO - ACTUAL);

   //Observa que:
   //edadFutura = edadActual + (FUTURO - ACTUAL); es una instrucci�n de asignaci�n
   //Formada por la expresi�n edadActual + (FUTURO - ACTUAL);
   //El operador de asignaci�n "="
   //La variable a la que se le asigna el valor de la expresi�n


   // Mostramos el resultado
   cout << "Mi edad actual es " << edadActual << endl;
   cout << "En el a�o " << FUTURO << " tendr� " << edadFutura << endl;

   return 0;
}

/*
 Escribe una lista de al menos 6 formas de usar el operador de asignaci�n: =, /=
 faltan 4
 */

 /*
  Escribe una lista de operadores aritm�ticos y l�gicos
  */

