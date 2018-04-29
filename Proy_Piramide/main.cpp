#include <iostream>

using namespace std;

int pot(int a, int b)
{
    int temp;
    if( b == 0)
        return 1;

    temp = pot(a, b/2);
    if (b%2 == 0)
        return temp*temp;
    else
        return a*temp*temp;
}

int cuantasMitades(int n) {
    int suma = 0;
    while (n > 1) {
        n/=2;
        suma++;
    }
    return suma;
}

int main()
{
    int N;
    cin >> N;
    int mitades = cuantasMitades(N);

    for (int i = 0; i <= mitades; i++) {
        int espacios = mitades-i;
        for (int j = 0; j < espacios; j++) {
            cout<<"  ";
        }

        cout<<"1 ";
        int nums = (mitades*2+1)-(espacios*2);
        for (int j = 0; j < nums-2; j++) {
            if (j<(nums)/2)
                cout<<pot(2,(j+1))<<" ";
            else
                cout<<pot(2,(nums-j-2))<<" ";

        }
        if (i>0)
            cout<<"1";
        cout<<endl;
    }

    return 0;
}
