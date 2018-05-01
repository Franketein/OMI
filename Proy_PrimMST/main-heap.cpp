#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> heap;
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

void insertar(int dato)
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

int obtenerMinimo()
{
    int i = 0;
    int raiz = heap[i];
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
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        int temp;
        cin >> temp;
        insertar(temp);
        for (int j = 0; j<nodosActuales; j++)
        {
            cout<<heap[j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i<nodosActuales; i++)
    {
        cout<<endl;
        cout<<obtenerMinimo()<<endl;
        for (int j = 0; j<nodosActuales; j++)
        {
            cout<<heap[j]<<" ";
        }
    }
    return 0;
}
