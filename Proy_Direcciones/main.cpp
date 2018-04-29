#include <iostream>

using namespace std;

int main()
{
    int apunta = 0; //(norte = 0, este = 1, sur = 2, oeste = 3)
    int instruccion = 0;
    int x = 0;
    int y = 0;
    int N;
    cin >> N;
    for (int i = 0; i<N; i++)
    {
        char instruccion;
        cin >> instruccion;
        if (instruccion == 'D')
            apunta+=1;
        else if (instruccion == 'I')
            apunta-=1;
        else if (instruccion == 'A')
        {
            int n;
            cin >> n;
            apunta %= 4; //(asegurarse de no salirse de rangos)
            if (apunta == 0)
                y+=n;
            else if (apunta == 1)
                x+=n;
            else if (apunta == 2)
                y-=n;
            else if (apunta == 3)
                x-=n;
        }
        apunta %= 4;
    }

    cout<<"("<<x<<","<<y<<")";
    return 0;
}
