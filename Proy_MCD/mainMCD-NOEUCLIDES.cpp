#include <iostream>

using namespace std;

int main()
{
    //Máximo común divisor, no euclides
    long long a;
    long long b;
    cin>>a>>b;

    long long resultado = min(a, b);
    while (a%resultado != 0 || b%resultado !=0) {
        //cout<<resultado<< " " << a%resultado<< " " <<b%resultado<<endl;
        resultado--;
    }
    cout<<resultado;
    return 0;
}
