#include <iostream>

using namespace std;

int NextPrime (int x)
{
    int y = x+1;
    bool exit = false;
    while (!exit)
    {
        for (int i = 2; i < y; i++)
        {
            if (y%i == 0)
            {
                y++;
                break;
            }
            else
            {
                if (i == y-1)
                {
                    exit = true;
                    break;
                }
            }
        }
    }
    return y;
}

int main()
{
    int num;
    cin>>num;
    int factorial = 1;
    int prim = 2;
    int cant = 0;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    do
    {
        if (factorial%prim == 0)
        {
            factorial /= prim;
            cant++;
        }
        else
        {
            prim = NextPrime(prim);
        }
    } while (factorial != 1);

    cout<<cant<<endl;
 	return 0;
}

