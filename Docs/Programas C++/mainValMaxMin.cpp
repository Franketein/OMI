/*
 El siguiente programa te muestra como preguntarle a tu sistema, los valores máximos
 y minimos de un tio de dato. Pon atención a los includes que se agregaron.
*/
#include <iostream>
#include <climits>  //Para determinar los valores  max & min de los tipos enteros
#include <cfloat>   //Para determinar los valores  max & min de los tipos reales (flotantes)

using namespace std;

int main()
{
   //Los tipos enteros
   cout << " El valor máximo de un tipo short es " << SHRT_MAX << endl;
   cout << " el valor mínimo de un tipo short es " << SHRT_MIN << endl;

   // Los tipos reales (flotantes)
   cout << " El valor máximo de un tipo double es " << DBL_MAX << endl;
  /*
  *************************************************************************************
  ¿Te fijaste en lo que hay de nuevo en los include?
  Tu trabajo: Escribe el código necesario para determinar los valores
  máximos y mínimos de los restantes tipos de datos en tu sistema.
  *************************************************************************************
  */



    return 0;
}
