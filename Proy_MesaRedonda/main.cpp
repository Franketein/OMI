#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int mesa[N] = {-1};
    for (int i = 0; i<N; i++)
    {
        mesa[i] = -1;
    }
    int kid = 0;
    int total = 0;
    while (mesa[0] != 0)
    {
        int extras = 0;
        for (int i = 0; i<K; i++)
        {
            kid++;
            kid = kid%N;
            if (kid == 0)
                extras = 0;
            if (mesa[kid] == 0 && i != K-1)
            {
                extras++;
                //cout<<kid<<" es 0"<<endl;
            }
        }

        cout<< extras<<endl;
        kid += extras;
        kid = kid%N;
        while (mesa[kid] == 0)
        {
            kid++;
            kid = kid%N;
        }
        kid = kid%N;
        mesa[kid] = 0;
        cout<<kid<<endl;
        if (kid != 0)
        {
            total++;
        }
        else
            break;
    }
    cout<<total;
    return 0;
}
