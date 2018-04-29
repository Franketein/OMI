#include <iostream>
#include <vector>

using namespace std;

int inversiones = 0;

int main()
{
    long long unsigned N;
    cin >> N;
    N*=N;
    //int inversiones = 0;
    vector<long long unsigned> hor;
    bool swaps = true;
    for (long long unsigned i = 0; i<N; i++)
    {
        long long unsigned temp = 0;
        cin>>temp;
        if (temp!=0)
        {
            hor.push_back(temp);
        }
    }
    long long unsigned tam = hor.size();
    for (int i = 0; i<tam-1 && swaps; i++)
    {
        swaps = false;
        for (int j = 0; j<tam-i-1; j++)
        {
            if(hor[j]>hor[j+1])
            {
                int temp = hor[j];
                hor[j] = hor[j+1];
                hor[j+1] = temp;
                inversiones++;
                swaps = true;
            }
        }
    }

    if (inversiones%2 == 0)
    {
        cout<<inversiones<<endl;
        cout<<"SI"<<endl;
    }
    else
    {
        cout<<inversiones<<endl;
        cout<<"NO"<<endl;
    }
    return 0;
}
