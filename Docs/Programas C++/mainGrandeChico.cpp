
#include <iostream>
using namespace std;
int main()
{
   // Esta sección se convertirá en una función en versiones posteriores
   // Sección de declaración de variables
   int elMayor;	      //El mas grande1 de los tres valores
   int masChico;      // El mas pequeño de los tres valores
                      //Los tres valores
   int num1;
   int num2;
   int num3;
   int grande1, chico1;
   int grande2, chico2;

   // Aqui se determina quién es el mayor y quién el menor
   // Modifica el programa para que se lean los tres números estilo competencia
   // Se leean los tres entero en una linea separados por un espacio en blanco.
   num1 = -50;
   num2 = 53;
   num3 = 78;

   if(num1 > num2)
   {
      grande1 = num1;
      chico1 = num2;
   }
   else
   {
      grande1 = num2;
      chico1 = num1;
   }
   if(num2 > num3)
   {
      grande2 = num2;
      chico2 = num3;
   }
   else
   {
      grande2 = num3;
      chico2 = num2;
   }
   if(grande1 > grande2)
      elMayor = grande1;
   else
      elMayor = grande2;
   if(chico1 < chico2)
      masChico = chico1;
   else
      masChico = chico2;

   // Esta sección se convertirá en una función
   // Se escriben los resultados pedidos
   cout << "El valor mayor es " << elMayor << endl;
   cout << "El valor menor es " << masChico << endl;
   return 0;
}
