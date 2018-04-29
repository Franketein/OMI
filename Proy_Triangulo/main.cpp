#include <iostream>

using namespace std;

int main()
{
    int tam;
    cout << "Ingresa la altura de tu triangulo: ";
    cin>>tam;
    cout<<endl;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl << endl;

    for (int i = tam; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl << endl;

    for (int i = tam; i > 0; i--)
    {
        int espacios = tam-i;
        for (int j = 0; j < tam; j++)
        {
            if (j < espacios)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout << endl;
    }

    cout << endl << endl << endl;

    for (int i = 1; i <= tam; i++)
    {
        int espacios = tam-i;
        for (int j = 0; j < tam; j++)
        {
            if (j < espacios)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout << endl;
    }

    return 0;
}
