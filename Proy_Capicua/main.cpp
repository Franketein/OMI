#include <iostream>

using namespace std;

int main()
{
    string n;
    cin>>n;
    int tam = n.size()-1;
    bool capi = true;
    for (int i =0; i<(tam+1)/2; i++) {
        if (n[i] != n[tam-i]) {
            capi = false;
            break;
        }
    }
    if (capi)
        cout<<"SI";
    else
        cout<<"NO";
    return 0;
}
