#include <iostream>

using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    int soldados[M][N];
    for (int i = 0; i< M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> soldados[i][j];
        }
    }
    int P;
    cin >> P;
    int lanzamientos[P];
    for (int i = 0; i < P; i++) {
        int fila, col, dist;
        cin >> fila >> col >> dist;
        int muertes = soldados[fila][col];

        //Norte, Sur, Este, Oeste
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila][col+j];
        }
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila+j][col];
        }
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila][col-j];
        }
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila-j][col];
        }

        //Diagonales
        dist = dist/2;
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila-j][col+j];
        }
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila+j][col+j];
        }
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila+j][col-j];
        }
        for (int j = dist; j > 0; j--) {
            muertes += soldados[fila-j][col-j];
        }
        lanzamientos[i] = muertes;
    }

    for (int i = 0; i < P; i++) {
        cout << lanzamientos[i] <<endl;
    }
    return 0;
}
