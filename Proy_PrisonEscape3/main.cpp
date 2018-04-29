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
    bool der = false;
    bool izq = false;
    bool down = false;
    bool up = false;
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
        vector<estado> S;
        S.push_back(inicial);
        int rutasFinales = 0;
        while (S.size()>0)
        {
            estado actual = S[S.size()-1];
            S.erase(S.end());
            int col = actual.columna;
            int fil = actual.fila;
            //carcel[actual.fila][actual.columna].visitada = true;
            if (fil == N-1 && col == N-1)
            {
                rutasFinales++;
                continue;
            }

            //Vecino Derecha
            estado vecino = carcel[fil][col+1];
            if (carcel[fil][col].der == false && col+1<N && vecino.visitada == false && vecino.detector == 0)
            {
                actual.der = true;
                S.push_back(vecino);
            }

            //Vecino Abajo
            vecino = carcel[fil+1][col];
            if (carcel[fil][col].down == false && fil+1<N && vecino.visitada == false && vecino.detector == 0)
            {
                actual.down = true;
                S.push_back(vecino);
            }

            //Vecino Izquierda
            vecino = carcel[fil][col-1];
            if (carcel[fil][col].izq == false && col-1>=0 && vecino.visitada == false && vecino.detector == 0)
            {
                actual.izq = true;
                S.push_back(vecino);
            }

            //Vecino Arriba
            vecino = carcel[fil-1][col];
            if (carcel[fil][col].up == false && fil-1>=0 && vecino.visitada == false && vecino.detector == 0)
            {
                actual
                .up = true;
                S.push_back(vecino);
            }

            //Imprimir Cola
            for (int i = 0; i<S.size(); i++)
            {
                cout<<S[i].fila<<","<<S[i].columna<<"|";
            }
            cout<<endl;
        }
        cout<<endl<<rutasFinales<<endl;
    }


    return 0;
}
