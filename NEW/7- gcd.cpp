#include <iostream>

using namespace std;
int sigPrimo(int x);
bool esPrimo(int n);
int GCD (int x, int y);

int main()
{
    int n;
    int m;

    cout << "gcd(m, n) = gcd(n, m mod n)" << endl;
    cin >> m >> n;
    cout << "gcd(" << m << ", " << n << ") = gcd(" << n << ", " << m%n << ")" << endl;
    cout << GCD(m, n) << " = " << GCD(n, m%n);
 	return 0;
}

int sigPrimo (int x)
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

bool esPrimo (int n)
{
    bool primo = true;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            primo = false;
            break;
        }
        else
        {
            if (i == n-1)
            {
                primo = true;
                break;
            }
        }
    }

    return primo;
}

int GCD (int x, int y)
{
    int gcd = 1;
    bool puedeDividir = true;
    int primo = 2;

    if (x == 0 || y == 0)
    {
        return -123123123;
    }
    else
    {
        while (puedeDividir)
        {
            if ((esPrimo(x) == true && esPrimo(y) == true && x != y) || (x == 1 || y == 1) || (primo > x || primo > y))
            {
                puedeDividir = false;
            }

            if (x%primo == 0 && y%primo == 0)
            {
                x = x/primo;
                y = y/primo;
                gcd *= primo;
            }
            else
            {
                primo = sigPrimo(primo);
            }
        }
    }

    return gcd;
}

