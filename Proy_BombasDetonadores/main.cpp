#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int bombas[26] = {0};
    for (int i = 0; i<n; i++) {
        char tipo;
        cin >> tipo;
        switch (tipo) {
        case 'A':
            bombas[0]++;
            break;
        case 'B':
            bombas[1]++;
            break;
        case 'C':
            bombas[2]++;
            break;
        case 'D':
            bombas[3]++;
            break;
        case 'E':
            bombas[4]++;
            break;
        case 'F':
            bombas[5]++;
            break;
        case 'G':
            bombas[6]++;
            break;
        case 'H':
            bombas[7]++;
            break;
        case 'I':
            bombas[8]++;
            break;
        case 'J':
            bombas[9]++;
            break;
        case 'K':
            bombas[10]++;
            break;
        case 'L':
            bombas[11]++;
            break;
        case 'M':
            bombas[12]++;
            break;
        case 'N':
            bombas[13]++;
            break;
        case 'O':
            bombas[14]++;
            break;
        case 'P':
            bombas[15]++;
            break;
        case 'Q':
            bombas[16]++;
            break;
        case 'R':
            bombas[17]++;
            break;
        case 'S':
            bombas[18]++;
            break;
        case 'T':
            bombas[19]++;
            break;
        case 'U':
            bombas[20]++;
            break;
        case 'V':
            bombas[21]++;
            break;
        case 'W':
            bombas[22]++;
            break;
        case 'X':
            bombas[23]++;
            break;
        case 'Y':
            bombas[24]++;
            break;
        case 'Z':
            bombas[25]++;
            break;
        }
    }

    cin >> m;
    int detonadores[26] = {0};
    for (int i = 0; i<m; i++) {
        char tipo;
        cin >> tipo;
        switch (tipo) {
        case 'A':
            detonadores[0]++;
            break;
        case 'B':
            detonadores[1]++;
            break;
        case 'C':
            detonadores[2]++;
            break;
        case 'D':
            detonadores[3]++;
            break;
        case 'E':
            detonadores[4]++;
            break;
        case 'F':
            detonadores[5]++;
            break;
        case 'G':
            detonadores[6]++;
            break;
        case 'H':
            detonadores[7]++;
            break;
        case 'I':
            detonadores[8]++;
            break;
        case 'J':
            detonadores[9]++;
            break;
        case 'K':
            detonadores[10]++;
            break;
        case 'L':
            detonadores[11]++;
            break;
        case 'M':
            detonadores[12]++;
            break;
        case 'N':
            detonadores[13]++;
            break;
        case 'O':
            detonadores[14]++;
            break;
        case 'P':
            detonadores[15]++;
            break;
        case 'Q':
            detonadores[16]++;
            break;
        case 'R':
            detonadores[17]++;
            break;
        case 'S':
            detonadores[18]++;
            break;
        case 'T':
            detonadores[19]++;
            break;
        case 'U':
            detonadores[20]++;
            break;
        case 'V':
            detonadores[21]++;
            break;
        case 'W':
            detonadores[22]++;
            break;
        case 'X':
            detonadores[23]++;
            break;
        case 'Y':
            detonadores[24]++;
            break;
        case 'Z':
            detonadores[25]++;
            break;
        }
    }

    int total = 0;
    for (int i =0; i<26; i++) {
        int precio = 0;
        cin >> precio;
        total+= precio*min(bombas[i], detonadores[i]);
    }

    cout<<total;
    return 0;
}
