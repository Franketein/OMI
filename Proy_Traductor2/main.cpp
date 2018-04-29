#include <iostream>

using namespace std;

int main()
{
    int d, w;
    cin >> d >>w;
    string enterales[10000];
    for (int i = 0; i<1000; i++)
    {
        enterales[i] = "C?";
    }
    for (int i = 0; i<d; i++)
    {
        int n;
        string e;
        cin >> n >> e;
        enterales[n] = e;
    }
    for (int i = 0; i<w; i++)
    {
        int num;
        cin >> num;
        cout<<enterales[num]<<endl;
    }
    return 0;
}
