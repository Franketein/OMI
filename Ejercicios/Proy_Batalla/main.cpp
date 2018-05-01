#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> enemigos;
    vector<int> aliados;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        enemigos.push_back(temp);
    }
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        aliados.push_back(temp);
    }

    int suma = 0;
    for (int i = 0; i < N; i++) {
        int menormayorindex = -1;
        int backupUnit = 0;
        for (int a = 0; a < aliados.size(); a++) {
            //cout << aliados[a] << enemigos[i] << endl;
            if (aliados[a] > enemigos[i] && (aliados[a] <= aliados[menormayorindex] || menormayorindex == -1)) {
                menormayorindex = a;
            } else {
                if (aliados[a] < aliados[backupUnit]) {
                    backupUnit = a;
                }
            }
        }
        if (menormayorindex != -1) {
            suma += aliados[menormayorindex];
            //cout << "elegi el ganador " << menormayorindex << " con valor de " << aliados[menormayorindex] << " suma=" << suma << " " << aliados[menormayorindex] << endl;
            aliados.erase(aliados.begin() + menormayorindex);
        } else {
            //cout << "elegi el backup de " << backupUnit << " con valor de " << aliados[backupUnit] << "a borrar:" << aliados[backupUnit] << endl;
            aliados.erase(aliados.begin() + backupUnit);
            //for (int x = 0; x < aliados.size(); x++) {
             //   cout << aliados[x] << endl;
            //}
        }
    }

    cout << suma;
    return 0;
}
