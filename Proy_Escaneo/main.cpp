#include <iostream>

using namespace std;

int main()
{
    int R, C, A, B;
    cin >> R >> C >> A >> B;
    char matriz[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < R; i++) {
        for (int filRep = 0; filRep < A; filRep++) {
            for (int j = 0; j < C; j++) {
                for (int colRep = 0; colRep < B; colRep++) {
                    cout<<matriz[i][j];
                }
            }
            cout << endl;
        }
    }

    return 0;
}
