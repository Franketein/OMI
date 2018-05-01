#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector< pair<int, int> > heap;
int nodosActuales = 0;

int izq(int i)
{
    return 2*i+1;
}

int der(int i)
{
    return 2*i+2;
}

int padre(int i)
{
    return floor((i-1)/2);
}

void insertar(pair<int, int> dato)
{
    int i = nodosActuales;
    heap.push_back(dato);
    nodosActuales++;

    while (i>0 && heap[padre(i)]>heap[i])
    {
        swap(heap[padre(i)], heap[i]);
        i = padre(i);
    }
}

pair<int, int> obtenerMinimo()
{
    int i = 0;
    pair<int, int> raiz = heap[i];
    heap[i] = heap[nodosActuales-1];
    nodosActuales--;

    while (izq(i) < nodosActuales)
    {
        int minimo;
        int derecha = der(i);
        int izquierda = izq(i);
        if ((derecha < nodosActuales) && (heap[derecha] < heap[izquierda]))
        {
            minimo = derecha;
        }
        else
        {
            minimo = izquierda;
        }

        if (heap[minimo]<heap[i])
        {
            swap(heap[minimo], heap[i]);
            i = minimo;
        }
        else
        {
            break;
        }
    }

    return raiz;
}

int main()
{
    cout<<"Número de vertices, número de aristas: ";
    int n, numAristas;
    cin >> n >> numAristas;

    int pesos[n];
    bool visitado[n];
    int padres[n];

    for (int i = 0; i<n; i++)
    {
        pesos[i] = 999999;
        visitado[i] = false;
        padres[i] = i;
    }

    vector< vector< pair<int, int> > > aristas;

    for (int i = 0; i<numAristas; i++)
    {

    }

    pesos[0] = 0;
    insertar({0, 0});

    return 0;
}
