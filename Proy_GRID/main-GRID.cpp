#include <iostream>
#include <queue>

using namespace std;

class casilla
{
    public:
        int fil;
        int colu;
        int distancia = 0;
        bool pared = false;
        bool visitado = false;
};

vector< vector<casilla> > grid;
int n;
int m;

int inicioFil;
int inicioCol;

int rutaMasCorta (int finFil, int finCol)
{
    vector< vector<casilla> > mapa = grid;
    queue<casilla> Q;
    Q.push(mapa[inicioFil][inicioCol]);
    int direcciones[4][2] = {{0, 1}, {1, 0}, {0,-1} , {-1, 0}};

    int fila = 0;
    int col = 0;
    while (!Q.empty())
    {
        casilla actual = Q.front();
        Q.pop();

        fila = actual.fil;
        col = actual.colu;
        mapa[fila][col].visitado = true;

        //cout<<fila<<","<<col<<" - "<<actual.distancia<<endl;

        if (fila == finFil && col == finCol)
        {
            return actual.distancia;
        }
        for (int i = 0; i<4; i++)
        {
            int nextCol = col+direcciones[i][1];
            int nextFila = fila+direcciones[i][0];
            if (nextFila < n && nextFila >= 0 && nextCol < m && nextCol >= 0 && mapa[nextFila][nextCol].pared != true && mapa[nextFila][nextCol].visitado != true)
            {
                actual.distancia++;
                mapa[nextFila][nextCol].distancia = actual.distancia;
                Q.push(mapa[nextFila][nextCol]);
                actual.distancia--;
            }
        }
    }
}

int main()
{
    //n es filas
    //m es columnas
    //inicioFil es la fila de inicio
    //inicioCol es la columna de inicio
    int Q; // Consultas
    cout<<"Ingresa los datos en el orden correcto: filas columnas S_i S_j Q"<<endl;
    cin >> n >> m >> inicioFil >> inicioCol >> Q;
    cout<<"Ingresa la matriz de "<<n<<" filas y "<<m<<" columnas: ( 'O' = celda vacía, '*' = pared )"<<endl;
    for (int i = 0; i<n; i++)
    {
        vector<casilla> fila;
        for (int j = 0; j<m; j++)
        {
            char celda;
            casilla temporal;
            cin >> celda;
            temporal.fil = i;
            temporal.colu = j;
            if (celda == '*')
                temporal.pared = true;
            fila.push_back(temporal);
        }
        grid.push_back(fila);
    }
    for (int i = 0; i<Q; i++)
    {
        int D_i, D_j;
        cin >> D_i >> D_j;
        cout << rutaMasCorta(D_i, D_j) <<endl;
    }
    return 0;
}
