#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2, a1, b1, a2, b2;
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;

    int aristaIzq = 0;
    if (x1 > a1)
        aristaIzq = x1;
    else
        aristaIzq = a1;

    int aristaDer = 0;
    if (x2 > a2)
        aristaDer = a2;
    else
        aristaDer = x2;

    int aristaDown = 0;
    if (y1 > b1)
        aristaDown = y1;
    else
        aristaDown = b1;

    int aristaUp = 0;
    if (y1 > y1)
        aristaUp = b2;
    else
        aristaUp = y2;

    int traslape = (aristaDer-aristaIzq)*(aristaUp-aristaDown);
    int area1 = (x2-x1)*(y2-y1);
    int area2 = (a2-a1)*(b2-b1);
    int areaTotal = area1+area2;
    if (aristaIzq < aristaDer && aristaDown < aristaUp)
    {
        areaTotal-=traslape;
    }
    cout<<areaTotal;
    return 0;
}
