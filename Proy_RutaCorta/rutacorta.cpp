#include <iostream>
#include <queue>

//Básicamente comom funciona el programa es que comenzando desde el punto de inicio
//Vamos "expandiendonos" y agregando las casillas continuas a la actual
//Hasta que llegamos a la meta
//Con esto nos aseguramos de probar todas los caminos posibles
//Pero a la vez solo nos quedamos con el que se llegó más rápido al final, que es lo que queremos


using namespace std;

class casilla {
public:
    int fil;
    int colu;
    bool pared = false;
    bool visitado = false;
    int distancia = 0;
};

int main()
{
    int n, m;
    cin >> n >> m;
    casilla mapa[n][m];
    //casilla es una clase que yo creé
    int inicioFil = 0;
    int inicioCol = 0;
    int finFil = 0;
    int finCol = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            //Aquí pues lo típico de guardar el mapa que da el usuario
            // 'a' es el punto de inicio
            // 'b' es la meta o punto final
            // '#' son las paredes
            // cualquier otro caracter es simplemente un lugar por donde si se puede pasar
            char valor;
            cin >> valor;
            casilla cuadro;
            cuadro.fil = i;
            cuadro.colu = j;
            //En cada casilla que vamos creando también almacenamos sus coordenadas
            if (valor == 'a')
            {
                inicioFil = i;
                inicioCol = j;
                //guardar aparte el lugar de inicio
            }
            else if (valor == 'b')
            {
                finFil = i;
                finCol = j;
                //guardar aparte la meta
            }
            else if (valor == '#')
            {
                cuadro.pared = true;
                //le ponemos a la "casilla" de esta cordenada que es una pared
            }
            mapa[i][j] = cuadro;
        }
    }

    queue<casilla> Q;
    Q.push(mapa[inicioFil][inicioCol]);
    //Aquí creamos la cola y la iniciamos con el punto de inicio, para eso guardamos sus coordenadas aparte
    int direcciones[4][2] = {{0, 1}, {1, 0}, {0,-1} , {-1, 0}};
    //Esto de direcciones es para no tener que hacer 4 ifs para el norte, este, etc.
    //básicamente cada  {1, 0} es lo que se le suma en el eje Y, y el segundo número es lo que se suma en el eje X
    
    int fila = 0;
    int col = 0;
    while (!Q.empty())
    {
        casilla actual = Q.front();
        Q.pop();

        fila = actual.fil;
        col = actual.colu;
        //Esto es nada más para no tener que escribir actual.fil cada vez que quiero saber la fila actual
        mapa[fila][col].visitado = true;
        //Marcamos la casilla actual como visitada (Esto lo hacemos en la matriz y no en la cola porque si no no se guardaría!)

        if (fila == finFil && col == finCol)
        {
            //Si ya llegamos a la meta pues salimos del while e imprimimos la distancia total
            cout<<actual.distancia<<endl;
            break;
        }
        for (int i = 0; i<4; i++)
        {
            //Este 'for' es el reemplazo de los ifs para el norte y eso
            
            int nextCol = col+direcciones[i][1];
            int nextFila = fila+direcciones[i][0];
            //Calculamos la siguiente posición dependiendo de la dirección a la que vamos a avanzar
            
            if (nextFila < n && nextFila >= 0 && nextCol < m && nextCol >= 0 && mapa[nextFila][nextCol].pared != true && mapa[nextFila][nextCol].visitado != true)
            {
                //Si la siguiente posición está dentro del rango de la matriz, no es pared y no está visitada
                
                actual.distancia++;
                mapa[nextFila][nextCol].distancia = actual.distancia;
                actual.distancia--;
                //Ponemos que la distancia a la siguiente casilla es la distancia que llevavamos hasta esta casilla +1
                //De esta manera es que vamos a poder saber la distancia del inicio al punto final cuando terminemos
                //Lo tenemos como parte de la clase casilla porque obviamente para casillas diferentes las distancias no van a ser las mismas
                
                Q.push(mapa[nextFila][nextCol]);
                //Pues nada más agregamos a la cola la siguiente casilla
            }
        }
    }

    return 0;
}
