#include <iostream>
#include <math.h>
using namespace std;

long long unsigned a, b;

int main()
{
    cin >> a >> b;
    //cout<<log2(a)<<endl;
    //cout<<log(pow(a, b))<<endl;
    cout<<trunc(log10(pow(a, b))) + 1<<endl;
    return 0;
}
