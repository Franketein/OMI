#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int camionesDisp[M] = {true};
    int resultados[N];
    int tiempo = 0;
    for (int i = 0; i < N; i++) {
        int peticion, duracion;
        cin >> peticion >> duracion;
        for (int c = 0; c < M; c++) {
            //cout << tiempo << c << camionesDisp[c]<<endl;
            if (camionesDisp[c]) {
                resultados[i] = c+1;
                //cout << camionesDisp[c] << c <<endl;
                break;
            } else {
                if (c == M-1) {
                    resultados[i] = -1;
                    tiempo += camionesDisp[0];
                }
            }
        }
    }

    for (int i = 0; i< N; i++ ) {
        cout << resultados[i] <<endl;
    }
    return 0;
}
