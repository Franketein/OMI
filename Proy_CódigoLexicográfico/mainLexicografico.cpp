#include <iostream>
using namespace std;

int main ()
{
    int n, movs;
    string codigo = "";
    cin>> n >> movs;
    
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        codigo += temp;
    }
    
    int x = 0;
    int y = 1;
    while (movs > 0) {
        if ((codigo[x] - '0') < (codigo[y] - '0'))
        {
            char temp = codigo[y];
            codigo[y] = codigo[x];
            codigo[x] = temp;
            
            movs--;
            x=0;
            y=1;
        }
        else
        {
            if (y>=n)
                break;
            x++;
            y++;
        }
    }
    cout<<codigo;
    return 0;
}
