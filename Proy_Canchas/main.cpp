#include <iostream>

using namespace std;

class cancha {
public:
    int x1;
    int y1;
    int x2;
    int y2;
    int largo;
    int alto;
    long long area;
};

int main()
{
    cancha c1, c2;
    cin >> c1.x1 >> c1.y1 >> c1.x2 >> c1.y2;
    c1.largo = c1.x2 - c1.x1;
    c1.alto = c1.y2 - c1.y1;
    c1.area = c1.largo*c1.alto;
    cin >> c2.x1 >> c2.y1 >> c2.x2 >> c2.y2;
    c2.largo = c2.x2 - c2.x1;
    c2.alto = c2.y2 - c2.y1;
    c2.area = c2.largo*c2.alto;

    if (c2.x1 < c1.x1)
    {
        cancha temporal = c2;
        c2 = c1;
        c1 = temporal;
    }

    long long areaTotal = c1.area+c2.area;
    long long traslape = 0;

    if (c2.x2 < c1.x2 && c2.y1 < c1.y2)
    {
        //Casos contenida en las y
        if (c2.y2 <= c1.y2)
        {
            //Contenida por completo
            traslape = c2.area;
        }
        else
        {
            //Semicontenida
            int altoTraslape = c1.y2-c2.y1;
            int largoTraslape = c2.largo;
            traslape = altoTraslape*largoTraslape;
        }
    }
    else if (c2.x1 < c1.x2 && c2.y2 < c1.y2)
    {
        //Casos contenida en las x
        if (c2.x2 <= c1.x2)
        {
            //Contenida por completo
            traslape = c2.area;
        }
        else
        {
            //Semicontenida
            int altoTraslape = c2.alto;
            int largoTraslape = c1.x2-c2.x1;
            traslape = altoTraslape*largoTraslape;
        }
    }
    else if (c2.x1 < c1.x2 && c2.y1 < c1.y2)
    {
        //Traslape de esquina
        int altoTraslape = c1.y2 - c2.y1;
        int largoTraslape = c1.x2 - c2.x1;
        traslape = altoTraslape*largoTraslape;
    }
    cout<<areaTotal-traslape;
    return 0;
}
