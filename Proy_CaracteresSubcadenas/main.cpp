#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;
    cin >> cadena;
    int n;
    cin >> n;
    int respuestas[n] = {0};
    for (int j = 0; j<n; j++)
    {
        char c;
        int i, t;
        cin >> c >> i >> t;



        /*cout<<subCad.find(c)<<endl;
        if (subCad.find(c) >= t)
            respuestas[j] = 0;
        else
            respuestas[j] = 1;
        */
    }

    for (int i = 0; i<n; i++)
    {
        cout<<respuestas[i]<<endl;
    }
    return 0;
}
