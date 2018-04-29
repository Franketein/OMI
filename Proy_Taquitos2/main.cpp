#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> Q;
    int N;
    cin >> N;
    int total = 0;
    for (int i = 0; i<N; i++)
    {
        int accion;
        cin >> accion;
        switch (accion)
        {
            case 1:
                int tacos;
                cin >> tacos;
                Q.push(tacos);
                break;

            case 2:
                if(!Q.empty())
                {
                    total += Q.front();
                    Q.pop();
                }
                break;

            case 3:
                cout<<Q.size()<<endl;
                break;

            case 4:
                cout<<total<<endl;
                break;
        }
    }
    return 0;
}
