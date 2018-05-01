#include <iostream>
#include <string>
#include <vector>

using namespace std;
int anagramas (string uno, string dos);

int main()
{
    string palabra;
    string palabraDos;
    cin >> palabra >> palabraDos;

    int res = anagramas(palabra, palabraDos);
    if (res == 0)
    {
        cout << "Son anagramas" << endl;
    }
    else
    {
        cout << "No son anagramas" << endl;
    }
    return 0;
}

int anagramas(string uno, string dos)
{
    vector<char> palUno(uno.length());
    vector<char> palDos(dos.length());

    if (uno.length() != dos.length())
    {
        return 1;
    }

    for (int i = 0; i < uno.length(); i++)
    {
        palUno[i] = uno.at(i);
        palDos[i] = dos.at(i);
    }

    for (int i = 0; i < uno.length(); i++)
    {
        for (int j = 0; j < dos.length(); j++)
        {
            if (palUno[i] == palDos[j])
            {
                palDos.erase(palDos.begin() + j);
                break;
            }
            if (j == dos.length() - 1)
            {
                return 1;
            }
        }
    }

    return 0;
}
