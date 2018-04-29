#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string mensaje ;
    char car;

    int tamCad = 0;
    long x = 0;
    long y = 0;
    double dist;
    getline(cin, mensaje);
    tamCad = mensaje.size();

   for(int i = 0; i < tamCad ; i++)
    {
      if((mensaje[i] == 'o') || (mensaje[i] == 'e') || (mensaje[i] == 'n') || (mensaje[i] == 's'))
      {
        car = mensaje[i];
        i++;
        int num = 0;
        while((i < tamCad) && (mensaje[i] >= '0')&& (mensaje[i] <='9'))
        {
          num = num*10 +int(mensaje[i] - '0');
          i++;
        }
        i--;
        switch(car)
        {
         case 'o':
          x = x - num;
          break;
         case 'e':
          x = x + num;
          break;
         case 'n':
          y = y + num;
          break;
         case 's':
          y = y - num;
          break;
        }
      }
      dist = sqrt(x*x + y*y);
    }
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;
    cout << dist << endl;
    return 0;
}
