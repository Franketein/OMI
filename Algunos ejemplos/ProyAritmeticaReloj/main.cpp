#include <iostream>

using namespace std;

int main()
{
    const int MAX_HORAS = 72;
    const int UN_DIA= 24;
    int laHora = 0;
    for(int contHoras = 0; contHoras < MAX_HORAS;)
    {
      if(laHora == 0)
        cout << endl;
      if(contHoras < 10)
         cout << " ";
      cout << contHoras << ":" << laHora << " " ;
      ++contHoras;
      laHora = contHoras % UN_DIA;
    }
    return 0;
}
