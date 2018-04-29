#include <iostream>
#include <vector>

using namespace std;
class estado
{
    public:
        bool used = false;
        int value = 1;
        int multiplications = 0;
};

estado valores[99999];

int main()
{
    for (int i = 1; i<=99999; i++)
    {
        valores[i].value = i;
    }

    int mainKey;
    int lock;
    cin >> mainKey >> lock;
    int N;
    cin>>N;
    int keys[N];
    //keys[0].value = mainKey.value;
    for (int i = 0; i<N; i++)
    {
        cin>>keys[i];
    }

    vector<estado> Q;
    estado inicial = estado();
    inicial.value=mainKey;
    Q.push_back(inicial);
    Q[0].used = true;
    valores[mainKey].used = true;
    int tiempo = 0;
    while (Q.size() > 0)
    {
        estado U = Q[0];
        Q.erase(Q.begin());
        if (U.value == lock)
        {
            tiempo = U.multiplications;
            break;
        }

        for (int i = 0; i<N; i++)
        {
            int currValue = (keys[i]*U.value)%1000000;
            if (valores[currValue].used == false)
            {
                valores[currValue].used = true;
                estado nuevo;
                nuevo.value = currValue;
                nuevo.multiplications = U.multiplications+1;
                Q.push_back(nuevo);
            }
        }

        //Imprimir Cola
        /*for (int i = 0; i<Q.size(); i++)
        {
            cout<<Q[i].value<<","<<Q[i].multiplications<<"|";
        }
        cout<<endl;*/
    }

    cout<<tiempo;
    return 0;
}
