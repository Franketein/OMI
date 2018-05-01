#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    cin>>n;
    int longi = n.length();
    char digitos[longi];

    int mayor = -1;
    int smayor = -1;

    for (int i = 0; i < longi; i++)
    {
        digitos[i] = n.at(i);
        if (digitos[i] >= digitos[mayor])
        {
            smayor = mayor;
            mayor = i;
        }
        else if (digitos[i] >= digitos[smayor])
        {
            smayor = i;
        }
    }

    if (smayor != 0)
    {
        int temp = digitos[smayor];
        for (int i = smayor; i >= 1; i--)
        {
            digitos[i] = digitos[i-1];
        }
        digitos[0] = temp;

        if (mayor < smayor)
        {
            temp = digitos[mayor+1];
            for (int i = mayor+1; i >= 1; i--)
            {
                digitos[i] = digitos[i-1];
            }
            digitos[0] = temp;
        }
        else
        {
            int temp = digitos[mayor];
            for (int i = mayor; i >= 1; i--)
            {
                digitos[i] = digitos[i-1];
            }
            digitos[0] = temp;
        }
    }
    else
    {
        int temp = digitos[mayor];
        for (int i = mayor; i >= 1; i--)
        {
            digitos[i] = digitos[i-1];
        }
        digitos[0] = temp;
    }


    for (int i = 0; i < longi; i++)
    {
        cout<<digitos[i];
    }

 	return 0;
}

