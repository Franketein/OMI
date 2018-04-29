#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAX_PRECIO = 1000;
static int elPrecio;

bool esMayor(int miIntento)
{
   return(miIntento > elPrecio);
}

int elJugador(int maxPrecio)
{
  int extremoSup, extremoInf;
  extremoInf = 1;
  extremoSup = maxPrecio;
  int miIntento = (extremoSup - extremoInf)/2;
  while((extremoSup - extremoInf) > 1)
  {
    if(esMayor(miIntento))
    {
     extremoSup = miIntento;
    }
    else
    {
     extremoInf = miIntento;
    }
    miIntento = (extremoSup + extremoInf)/2;
        cout<<miIntento<<endl;
  }
  return miIntento;

}

int main()
{

  srand( static_cast<unsigned int>( time( 0 ) ) );
  elPrecio = 1 + rand() % MAX_PRECIO;
  cout<<elPrecio<<endl<<endl;
  int yoDigoElPrecioEs = elJugador(MAX_PRECIO);
  cout<<endl<<endl<<yoDigoElPrecioEs;
  if(yoDigoElPrecioEs == elPrecio)
  {
    cout << " Le atinaste " << endl;
  }
  else
  {
    cout << " Fallaste";
  }
  return 0;
}
