#include <iostream>
#include <string>

using namespace std;

int main()
{
    string binario;
    cin >> binario;
    int i = stoi(binario, nullptr, 2);
    if (i%2!=0)
        cout<<i/2+1;
    return 0;
}
