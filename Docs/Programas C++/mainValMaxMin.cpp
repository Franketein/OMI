/*
 El siguiente programa te muestra como preguntarle a tu sistema, los valores m�ximos
 y minimos de un tio de dato. Pon atenci�n a los includes que se agregaron.
*/
#include <iostream>
#include <climits>  //Para determinar los valores  max & min de los tipos enteros
#include <cfloat>   //Para determinar los valores  max & min de los tipos reales (flotantes)

using namespace std;

int main()
{
   //Los tipos enteros
   cout << " El valor m�ximo de un tipo short es " << SHRT_MAX << endl;
   cout << " el valor m�nimo de un tipo short es " << SHRT_MIN << endl;

   // Los tipos reales (flotantes)
   cout << " El valor m�ximo de un tipo double es " << DBL_MAX << endl;
  /*
  *************************************************************************************
  �Te fijaste en lo que hay de nuevo en los include?
  Tu trabajo: Escribe el c�digo necesario para determinar los valores
  m�ximos y m�nimos de los restantes tipos de datos en tu sistema.
  *************************************************************************************
  */



    return 0;
}
