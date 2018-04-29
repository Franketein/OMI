#include <iostream>
#include <vector>

using namespace std;

class celda
{
    public:
        int x = 1;
        int y = 1;
        int padreX = 0;
        int padreY = 0;
        int detector = 0;
        bool visitada = false;

    void zero () {
        x = 1;
        y = 1;
        visitada = false;
    }
};

int main()
{
    int T;
    cin >> T;
    int respuestas[T];
    for (int i = 0; i<T; i++)
    {
        int N;
        cin>>N;
        celda carcel[N][N];
        for (int fil = 1; fil<=N; fil++)
        {
            for (int col = 1; col<=N; col++)
            {
                carcel[fil-1][col-1].x = col;
                carcel[fil-1][col-1].y = fil;
                cin >> carcel[fil-1][col-1].detector;
            }
        }
        int total = 0;
        vector<celda> S;
        carcel[0][0].visitada = true;
        S.push_back(carcel[0][0]);
        cout<<endl;
        //Imprimir Cola
        for (int i = 0; i<S.size(); i++)
        {
            cout<<"("<<S[i].y<<","<<S[i].x<<")"<<endl;
        }
        cout<<endl;
        while (S.size() > 0) {
            celda celdaActual = S[S.size()-1];
            S.erase(S.end());
            int col = celdaActual.x;
            int fil = celdaActual.y;
            int colInd = col-1;
            int filInd = fil-1;
            //cout<<fil<<","<<col<<endl;
            if (fil == N && col == N)
            {
                total++;
                continue;
            }
            //carcel[filInd][colInd].visitada = true;

            //Vecino Derecha
            if (colInd+1<N && carcel[filInd][colInd+1].visitada == false && carcel[filInd][colInd+1].detector == 0 && carcel[filInd][colInd+1].padreY != carcel[filInd][colInd+1].y && carcel[filInd][colInd+1].padreX != carcel[filInd][colInd+1].x)
            {
                carcel[filInd][colInd+1].visitada = true;
                carcel[filInd][colInd+1].padreX = carcel[filInd][colInd].visitada.x;
                carcel[filInd][colInd+1].padreY = carcel[filInd][colInd].visitada.y;
                S.push_back(carcel[filInd][colInd+1]);
                carcel[filInd][colInd+1].visitada = false;
            }

            //Vecino Abajo
            if (filInd+1<N && carcel[filInd+1][colInd].visitada == false && carcel[filInd+1][colInd].detector == 0 && carcel[filInd+1][colInd].padreX != carcel[filInd+1][colInd].x && carcel[filInd+1][colInd].padreY != carcel[filInd+1][colInd].y)
            {
                carcel[filInd+1][colInd].visitada = true;
                carcel[filInd+1][colInd].padreY = carcel[filInd][colInd].y;
                carcel[filInd+1][colInd].padreX = carcel[filInd][colInd].x;
                S.push_back(carcel[filInd+1][colInd]);
                carcel[filInd+1][colInd].visitada = false;
            }

            //Vecino IzSuierda
            if (colInd-1>=0 && carcel[filInd][colInd-1].visitada == false && carcel[filInd][colInd-1].detector == 0 && carcel[filInd][colInd-1].padreX != carcel[filInd][colInd-1].x && carcel[filInd][colInd-1].padreY != carcel[filInd][colInd-1].y)
            {
                carcel[filInd][colInd-1].visitada = true;
                S.push_back(carcel[filInd][colInd-1]);
                carcel[filInd][colInd-1].visitada = false;
            }

            //Vecino Arriba
            if (filInd-1>=0 && carcel[filInd-1][colInd].visitada == false && carcel[filInd-1][colInd].detector == 0 && carcel[filInd-1][colInd].padreX != carcel[filInd-1][colInd].x && carcel[filInd-1][colInd].padreY != carcel[filInd-1][colInd].y)
            {
                carcel[filInd-1][colInd].visitada = true;
                S.push_back(carcel[filInd-1][colInd]);
                carcel[filInd-1][colInd].visitada = false;
            }

            //Imprimir Cola
            cout<<endl;
            for (int i = 0; i<S.size(); i++)
            {
                cout<<"("<<S[i].y<<","<<S[i].x<<")"<<endl;
            }
            cout<<endl;

        }
        respuestas[i] = total;
    }

    cout<<endl;
    cout<<endl;
    for (int i = 0; i<T; i++)
    {
        cout<<respuestas[i]<<endl;
    }

    return 0;
}
