#include <iostream>
#include <string>
using namespace std;
int main()
{
   const int ANCHO = 3; 	// NÚMERO DE CARACTERES DE ANCHO
   const int ALTO = 5;	//
   int numFila;	// para llevar la cuenta de las filas (altura)
   int numColumna;	// para llevar la cuenta de las numColumnaas (ancho)

   //
   for(numFila = 1; numFila <= ALTO; numFila++)
   {
      for(numColumna = 1; numColumna <= ANCHO; numColumna++)
      {
         // Se pinta un asterísco en cada columna
         if(numFila == 1 || numFila == 3 || numFila == ALTO)
            cout << "*";
         // Se pinta un asterísco en la columna 1
         else if(numColumna == 1)
            cout << "*";
         // Se pinta un espacio en lugar del asterisco
         else
            cout << " ";
      }
      cout << endl;
   }
   //
   return 0;
}
