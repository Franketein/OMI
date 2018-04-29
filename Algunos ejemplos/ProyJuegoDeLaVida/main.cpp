#include <iostream>
using namespace std;

const int MAX_FILAS = 20;
const int MAX_COLUMNAS = 60;

int cuadricula[MAX_FILAS + 2][MAX_COLUMNAS + 2]; // Variable global. La cuadrícula
 /*
  Pre:
  Post:
*/
 void instrucciones()
 {
   cout << "\t \tEl Juego de la Vida" << endl;
   cout << "El juego se desarrolla en una cuadrícula de tamaño "
        << MAX_FILAS << " por " << MAX_COLUMNAS << " en la cual" << endl;
   cout << "cada celda puede estar ocupada por un organismo o no." << endl;
   cout << "La ocupación de las celdas puede cambiar de generación en generación " << endl;
   cout << "de acuerdo a el número de celdas vecinas que tienen organismos (vivos)."
        << endl;
 }


 bool siLaSiguiente()
 {
   int c;
   bool respuesta = true;

   do {  //  Se repite hasta que la entrada es como se debe.
      if (respuesta)
         cout << " (s,n)? " << flush;

      else
         cout << "Responde con s o n: " << flush;

      do { //  Ignore los blancos.
         c = cin.get();
      } while (c == '\n' || c ==' ' || c == '\t');
      respuesta = false;
   } while (c != 's' && c != 'S' && c != 'n' && c != 'N');
   return (c == 's' || c == 'S');
 }

 /*
  Pre: No hemos visto esto
  Pos:
*/
//Conteo de vecinos vivos
 int cuentaDeVecinasVivas(int fila, int columna)
 {
   int i, j;
   int contador = 0;
   for (i = fila - 1; i <= fila + 1; i++)
      for (j = columna - 1; j <= columna + 1; j++)
         contador += cuadricula[i][j];  //  Vecino vivo. Recuerda que el arreglo contiene 0 o 1.
   contador -= cuadricula[fila][columna]; //  Una celda no es vecina de si misma.
   return contador;
 }


 /*
  Pre:
  Post:
*/
//Se actualiza el estado de la cuadrícula
 void actualizar()
 {
   int fila, columna;
   int new_cuadricula[MAX_FILAS + 2][MAX_COLUMNAS + 2];

   for (fila = 1; fila <= MAX_FILAS; fila++)
      for (columna = 1; columna <= MAX_COLUMNAS; columna++)
         switch (cuentaDeVecinasVivas(fila, columna)) {
         case 2:
            new_cuadricula[fila][columna] = cuadricula[fila][columna];  //  No cambia el estado.
            break;
         case 3:
            new_cuadricula[fila][columna] = 1;                //  Ahora la celda tiene un organismo
                      break;
         default:
            new_cuadricula[fila][columna] = 0;                //  Ahora la celda no tiene un organismo.
         }

   for (fila = 1; fila <= MAX_FILAS; fila++)
      for (columna = 1; columna <= MAX_COLUMNAS; columna++)
         cuadricula[fila][columna] = new_cuadricula[fila][columna];

 }


 /*
  Pre:
  Post:
*/
 void inicializar()
 {
    int fila, columna;
   for (fila = 0; fila <= MAX_FILAS+1; fila++)
      for (columna = 0; columna <= MAX_COLUMNAS+1; columna++)
         cuadricula[fila][columna] = 0;
   cout << "Dame una lista de las coordenadas de las celdas con organismo." << endl;
   cout << "Termina con el par -1 -1" << endl;
   cin >> fila >> columna;

   while (fila != -1 || columna != -1)
   {
      if (fila >= 1 && fila <= MAX_FILAS)
         if (columna >= 1 && columna <= MAX_COLUMNAS)
            cuadricula[fila][columna] = 1;
         else
            cout << "Columna " << columna << " está fuera del rango." << endl;
      else
         cout << "Fila " << fila << " está fuera del rango." << endl;
      cin >> fila >> columna;
   }

 }

 void print()
 {
   int fila, columna;
   cout << "\nLa configuración actual del juego es:" <<endl;
   for (fila = 1; fila <= MAX_FILAS; fila++)
   {
      for (columna = 1; columna <= MAX_COLUMNAS; columna++)
         if (cuadricula[fila][columna] == 1) cout << '*';
         else cout << ' ';
      cout << endl;
   }
   cout << endl;

 }

 int main()
 {
   instrucciones();
   inicializar();
   print();

   cout << "¿Quiere la siguiente generación? " << endl;

   while (siLaSiguiente())
   {
     actualizar();
     print();
     cout << "¿Quiere la siguiente generación? " << endl;
   }
    return 0;
 }
