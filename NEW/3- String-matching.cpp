#include <iostream>
#include <string>
#include <vector>

using namespace std;
void llenarListas (vector<char>& lista, string palabra);

int main()
{
    string tString;
    string pString;
    cin >> tString >> pString;
    vector<char> t(tString.length());
    vector<char> p(pString.length());

    llenarListas(t, tString);
    llenarListas(p, pString);

    for (int i = 0; i < t.size(); i++)
    {
        for (int j = 0; j < p.size();)
        {
            if (t[i+j] == p[j])
            {
                j++;
                if (j == p.size())
                {
                    cout << i << " ";
                }
            }
            else
            {
                break;
            }
        }
    }

    return 0;
}

void llenarListas(vector<char>& lista, string palabra)
{
    for (int i = 0; i < lista.size(); i++)
    {
        lista[i] = palabra.at(i);
    }
}
