#include <iostream>
#include <map>

using namespace std;

int main()
{
    int d, w;
    cin >> d >> w;
    map <int, string> diccionario;
    for (int i = 0; i<d; i++)
    {
        int n;
        string e;
        cin >> n >> e;
        diccionario.insert(pair<int, string>(n, e));
    }
    string respuestas[w];
    for (int i  = 0; i<w; i++)
    {
        int palabra;
        cin >> palabra;
        if (diccionario.find(palabra) != diccionario.end())
            respuestas[i] = diccionario[palabra];
        else
            respuestas[i] = "C?";
    }

    for (int i  = 0; i<w; i++)
    {
        cout<< respuestas[i]<<endl;
    }
    return 0;
}
