#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long unsigned N;
    cin >> N;
    N*=N;
    int inversiones = 0;
    vector<int> hor;
    for (int i = 0; i<N; i++)
    {
        int temp = 0;
        cin>>temp;
        if (temp!=0)
        {
            hor.push_back(temp);
        }
    }
    int tam = hor.size();

    for (int i = 0; i<tam; i++)
    {
        for (int j = i+1; j<tam-1; j++)
        {
            if(hor[i]>hor[j])
            {
                int temp = hor[j];
                hor[j] = hor[j+1];
                hor[j+1] = temp;
                inversiones++;
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
