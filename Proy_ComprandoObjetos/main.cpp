#include <iostream>
#include <queue>

using namespace std;

int cantObjetos;

class vendedor {
public:
    int costo;
    bool operator< (vendedor& o)
    {
        return costo < o.costo;
    }
};

int main()
{

    return 0;
}
