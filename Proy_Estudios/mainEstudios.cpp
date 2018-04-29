#include <iostream>
using namespace std;

int main ()
{
    int k;
    cin>>k;
    int semana[7];
    cin >> semana[0] >> semana[1] >> semana[2] >> semana[3] >> semana[4] >> semana[5] >> semana[6];
    string dias[7] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    int dNum = -1;
    while (k>0) {
        dNum++;
        dNum = dNum%7;
        k-=semana[dNum];
    }
    dNum = dNum%7;
    cout<<dias[dNum];
    return 0;
}
