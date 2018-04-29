#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string base3 = "";
    while (N >= 3) {
        base3 = to_string(N%3) + base3;
        N=N/3;
    }
    cout<< N <<base3;
    return 0;
}
