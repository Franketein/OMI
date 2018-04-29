#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int totales = 0;
    vector<int> indices;
    for (int i = 1; i<=n; i++)
    {
        int num;
        cin >> num;
        if (num%3 == 0)
        {
            totales++;
            indices.push_back(i);
        }
    }

    if (totales == 0)
    {
        cout<<"No hay triples.";
        return 0;
    }
    cout<<totales<<endl;
    for (int i = 0; i<totales; i++)
    {
        cout<<indices[i]<<" ";
    }
    return 0;
}
