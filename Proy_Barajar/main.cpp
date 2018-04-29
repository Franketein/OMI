#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    vector<int> baraja;
    for (int i = 0; i<52; i+=1)
    {
        baraja.push_back(i+1);
    }

    srand(time(NULL));
    for (int i = 0; i<52; i+=1)
    {
        int aCambiar = rand()%52;
        int temp = baraja[i];
        baraja[i] = baraja[aCambiar];
        baraja[aCambiar] = temp;
    }

    for (int i = 0; i<52; i+=1)
    {
        cout<<baraja[i]<<endl;
    }

    return 0;
}
