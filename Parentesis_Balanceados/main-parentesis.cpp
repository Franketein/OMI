#include <iostream>

using namespace std;

int main()
{
    int llaves = 0;
    int corchetes = 0;
    int regular = 0;
    int n;
    cin >> n;
    for (int c = 0; c <n; c++)
    {
        string cadena;
        cin >> cadena;
        if (cadena[0] ==  ')' || cadena[0] == ']' || cadena[0] == '}' )
        {
            cout<< "NO"<<endl;
            continue;
        }

        if (cadena[cadena.size()-1] == '(' || cadena[cadena.size()-1] == '[' || cadena[cadena.size()-1] == '{')
        {
            cout<< "NO"<<endl;
            continue;
        }

        llaves = 0;
        regular = 0;
        corchetes = 0;

        for (int i = 0; i<cadena.size(); i++)
        {
            char parentesis = cadena[i];
            if (parentesis ==  '(' || parentesis == ')' ) //Es de tipo regular
            {
                if (parentesis == '(')
                    regular+=1;
                else
                    regular-=1;
            }
            else if (parentesis == '[' || parentesis == ']') //Es de tipo corchete
            {
                if (regular != 0)
                {
                    cout<< "NO"<<endl;
                    break;
                }

                if (parentesis == '[')
                    corchetes+=1;
                else
                    corchetes-=1;
            }
            else if (parentesis == '{' || parentesis == '}') //Es de tipo llave
            {
                if ( regular != 0 || corchetes != 0)
                {
                    cout<< "NO"<<endl;
                    break;
                }

                if (parentesis == '{')
                    llaves+=1;
                else
                    llaves-=1;
            }
            if ( llaves < 0 || corchetes < 0 || regular < 0)
            {
                cout<< "NO"<<endl;
                break;
            }

            if (i == cadena.size()-1)
            {
                cout<<"SI"<<endl;
            }
        }
    }
    return 0;
}
