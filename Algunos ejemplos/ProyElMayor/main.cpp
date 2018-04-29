#include <iostream>

using namespace std;

int main()
{
   const int CAPACIDAD = 1000;
   double valores[CAPACIDAD];
   int tamActualArreglo = 0;

   cout << "Por favor escribe los valores, Q para terminar:" << endl; //Recuerda que esto MUY  rara vez se usa en la competencia
   double entrada;
   while (cin >> entrada)
   {
      if (tamActualArreglo < CAPACIDAD)
      {
         valores[tamActualArreglo] = entrada;
         tamActualArreglo++;
      }
   }

   double elMayor = valores[0];
   for (int i = 1; i < tamActualArreglo; i++)
   {
      if (valores[i] > elMayor)
      {
         elMayor = valores[i];
      }
   }

   for (int i = 0; i < tamActualArreglo; i++)
   {
      cout << valores[i];
      if (valores[i] == elMayor)
      {
         cout << " <== el valor mas grande";
      }
      cout << endl;
   }

   return 0;
}
