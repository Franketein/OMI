#include <iostream>

using namespace std;
void dibujaTringulos(); //Prototipo

int main()
{
    dibujaTringulos();
    return 0;
}


void dibujaTringulos()
{
   int fila; // La posición de la fila
   int colunmna; //la posición de la colunmna
   int blancos; // cantidad e blancos por pintar

   // primer triángulo
   for ( fila = 1; fila <= 10; fila++ )
   {
      for ( colunmna = 1; colunmna <= fila; colunmna++ )
         cout << "*";

      cout << endl;
   } // for

   cout << endl;

   //// segundo triángulo
   //for (  )
   //{
   //  for ( )
   //    cout << "*";
   //
   //   cout << endl;
   //} //for

   cout << endl;

   // tercer triángulo
   for ( fila = 10; fila >= 1; fila-- )
   {
      for ( blancos = 10; blancos > fila; blancos-- )
         cout << " ";

      for ( colunmna = 1; colunmna <= fila; colunmna++ )
         cout << "*";

      cout << endl;
   } // end for

   cout << endl;

   // cuarto triángulo
 
}
