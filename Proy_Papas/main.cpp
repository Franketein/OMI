#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int votos[n+1] = {0};
    for (int i = 0; i < n; i++) {
        int voto;
        cin >> voto;
        votos[voto] += 1;
    }

    int x = *max_element(votos, votos+n);
    if (x >= (2/3)*n)
        cout << distance(votos, find(votos, votos + n+1, x));
    else
        cout << "No Habemus Papam";
    return 0;
}
