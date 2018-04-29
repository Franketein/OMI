/*
En C++ existen varios tipos de datos: numéricos enteros, numéricos reales(flotantes),
booleanos, carácter. Estos son los tipos primitivos. En C++ es importante el tipo
de dato, ya que esto le dice al compilador cuanta memoria reservar y como procesar el
dato.
El siguiente programa muestra como determinar el tamaño de diferentes tipos de datos.
*/
#include <iostream>
using namespace std;

int main()
{
  //Los tipos enteros
  cout << " El tamaño de un tipo short es " << sizeof(short) << " bytes" << endl;
  //El tipo long long no se ha implementado en algunos compiladores
  cout << " El tamaño de un tipo long long es " << sizeof(long long) << " bytes" << endl;

  /*
  *************************************************************************************
  Tu trabajo: Escribe el código necesario para determinar el tama de los restantes
  tipos de datos, en tu sistema. Debe imprimir  unas 14 lineas mas
  *************************************************************************************
  */

  //Tipos flotantes

  //Tipos booleano y carácter


  return 0;
}
