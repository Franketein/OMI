#include <iostream>
#include <vector>

using namespace std;

class estado
{
public:
    bool visitada = false;
    int fila = 0;
    int columna = 0;
    int detector = 0;
    int padreX = -1;
    int padreY = -1;
};

int main()
{
    int T;
    cin >> T;
    for (int caso = 0; caso<T; caso++)
    {
        int N;
        cin >> N;
        estado carcel[N][N];
        for (int fil = 0; fil<N; fil++)
        {
            for (int col = 0; col<N; col++)
            {
                cin>>carcel[fil][col].detector;
                carcel[fil][col].fila = fil;
                carcel[fil][col].columna = col;
            }
        }

        estado inicial;
        vector<estado> Q;
        Q.push_back(inicial);
        int rutasFinales = 0;
        while (Q.size()>0)
        {
            estado actual = Q[Q.size()-1];
            Q.erase(Q.end());
            int col = actual.columna;
            int fil = actual.fila;
            carcel[actual.fila][actual.columna].visitada = true;
            if (fil == N-1 && col == N-1)
            {
                rutasFinales++;
                continue;
            }

            //Vecino Derecha
            estado vecino = carcel[fil][col+1];
            if (col+1<N && vecino.visitada == false && vecino.detector == 0)
            {
                Q.push_back(carcel[fil][col+1]);
            }

            //Vecino Abajo
            vecino = carcel[fil+1][col];
            if (fil+1<N && vecino.visitada == false && vecino.detector == 0)
            {
                Q.push_back(vecino);
            }

            //Vecino Izquierda
            vecino = carcel[fil][col-1];
            if (col-1>=0 && vecino.visitada == false && vecino.detector == 0)
            {
                Q.push_back(vecino);
            }

            //Vecino Arriba
            vecino = carcel[fil-1][col];
            if (fil-1>=0 && vecino.padreX !=  && vecino.visitada == false && vecino.detector == 0)
            {
                Q.push_back(vecino);
            }

            //Imprimir Cola
            for (int i = 0; i<Q.size(); i++)
            {
                cout<<Q[i].fila<<","<<Q[i].columna<<"|";
            }
            cout<<endl;
        }
        cout<<endl<<rutasFinales<<endl;
    }


    return 0;
}
