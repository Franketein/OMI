#include <iostream>

using namespace std;

int main()
{
    bool as;
    bool mix = false;
    for (int i = 0; i < 8; i++) {
        int x;
        cin >> x;
        if (i == 0) {
            if (x == 8) {
                as =false;
                continue;
            } else if (x == 1) {
                as = true;
                continue;
            } else {
                cout << "mixed";
                mix = true;
                break;
            }
        }
        if (as) {
            if (x != i+1) {
                mix = true;
                cout << "mixed";
                break;
            }
        } else {
            if (x != 8-i) {
                mix = true;
                cout << "mixed";
                break;
            }
        }
    }

    if (mix)
        return 0;
    if (as)
        cout << "ascending";
    else
        cout << "descending";
    return 0;
}
