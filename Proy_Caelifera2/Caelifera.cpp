#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void saltos (string cad, int recorrido, int meta)
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
}

int main()
{
    int n;
    cin >> n;
    saltos("", 0, n);
    return 0;
}
