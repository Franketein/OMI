#include <iostream>

using namespace std;
void intercambia (int& x, int& y);

int main()
{
    int a = 5;
    int b = 11;

    intercambia(a, b);
    cout<<"El valor de a:"<<a<<" ";
    cout<<"El valor de b:"<<b<<endl;

    return 0;
}

void intercambia (int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
