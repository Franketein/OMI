#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

/*void saltos (string cad, int recorrido, int meta)
{
    if (recorrido == meta)
    {
        cout<<cad<<endl;
        return;
    }

    for (int i = 1; i<=meta; i++)
    {
        //cout<< i;
        if (recorrido+i<=meta)
        {
            //cout << " SI POR "<<recorrido<<" "<<cad<<endl;
            stringstream ss;
            ss << i;
            cad+=ss.str();
            saltos(cad, recorrido+i, meta);
            cad.pop_back();
            //cout<<cad<<endl;
        }
    }
}*/

class estado
{
public:
    string cadena = "";
    int recorrido = 0;
};

int main()
{
    int n;
    cin >> n;
    vector<estado> Q;
    estado distancias[n];
    for (int i = 0; i<n; i++)
    {
        stringstream ss;
        ss << i+1;
        distancias[i].cadena = ss.str();
        distancias[i].recorrido = i+1;
    }
    estado inicial;
    inicial.cadena = "";
    inicial.recorrido = 0;
    Q.push_back(inicial);
    while (Q.size() > 0)
    {
        estado actual = Q[Q.size()-1];
        Q.erase(Q.end());
        if (actual.recorrido == n)
        {
            cout<<actual.cadena<<endl;
            continue;
        }

        for (int i = 1; i<=n; i++)
        {
            if (actual.recorrido+i<=n)
            {
                stringstream ss;
                ss << i;
                estado nuevo;
                nuevo.cadena = actual.cadena + ss.str();
                nuevo.recorrido = actual.recorrido+i;
                Q.push_back(nuevo);
            }
        }
        //Imprimir Cola
        /*for (int i = 0; i<Q.size(); i++)
        {
            cout<<Q[i].recorrido<<","<<Q[i].cadena<<"|";
        }
        cout<<endl;*/
    }
    //saltos("", 0, n);

    return 0;
}
