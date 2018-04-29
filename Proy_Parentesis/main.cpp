#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string cadena;
    cin >> cadena;
    long long int abren = 0;
    long long int cierran = 0;
    if (cadena[0] == ')' || cadena[cadena.length()-1] == '(')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for (long long int i = 0; i<cadena.length(); i++)
    {
        if (cadena[i] == '(')
        {
            abren++;
        }
        else if (cadena[i] == ')')
        {
            cierran++;
        }
    }
    if (abren==cierran)
        cout<<"SI"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
