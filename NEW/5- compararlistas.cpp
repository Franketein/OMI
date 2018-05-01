#include <iostream>
#include <vector>

using namespace std;
void llenarListas (vector<int>& lista);
void compararListas (vector<int>& listaUno, vector<int>& listaDos);

int main()
{
    int tamUno;
    int tamDos;
    cin >> tamUno >> tamDos;

    vector<int> listaUno(tamUno);
    vector<int> listaDos(tamDos);
    llenarListas(listaUno);
    llenarListas(listaDos);

    compararListas(listaUno, listaDos);

 	return 0;
}

void llenarListas(vector<int>& lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cin >> lista[i];
    }
}

void compararListas(vector<int>& listaUno, vector<int>& listaDos)
{
    for (int i = 0; i < listaUno.size(); i++)
    {
        for (int j = 0; j < listaDos.size(); j++)
        {
            if (listaUno[i] == listaDos[j])
            {
                cout << listaDos[j] << " ";
                listaDos.erase(listaDos.begin()+j);
                break;
            }
        }
    }
}

