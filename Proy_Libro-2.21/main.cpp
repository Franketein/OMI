#include <iostream>

using namespace std;

void dibujaRectangulo () {
    int largo, alto;
    cin >> largo >> alto;
    for (int i = 0; i < alto; i++) {
        cout<<"*";
        for (int j = 0; j < largo-2; j++) {
            if (i == 0 || i==alto-1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout<<"*"<<endl;
    }
}

void dibujaOvalo () {
    int ancho, alto;
    cin >> ancho >> alto;
    for (int i = 0; i < alto; i++) {
        if ()
        int numEspacios =
        for (int j = 0; j < ancho; j++) {
            if ()
        }
    }
}

void dibujaFlecha () {

}

void dibujaRombo () {

}

int main()
{
    int caso;
    cin >> caso;
    switch (caso) {
    case 0:
        dibujaRectangulo();
        break;
    case 1:
        dibujaOvalo();
        break;
    case 2:
        dibujaFlecha();
        break;
    case 3:
        dibujaRombo();
        break;
    }
    return 0;
}
