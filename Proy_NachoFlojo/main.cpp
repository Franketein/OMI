#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string resp = "";
    for (int i = 0; i < n; i++) {
        int x, y, x2, y2, ax, ay, bx, by, cx, cy, dx, dy;
        cin >> x >> y >> x2 >> y2 >> ax >> ay >> bx >> by >> cx >> cy >> dx >>dy;
        int X = x + x2;
        int Y = y + y2;
        if (X == ax && Y == ay) {
            resp += "A";
        }
        else if (X == bx && Y == by) {
            resp += "B";
        }
        else if (X == cx && Y == cy) {
            resp += "C";
        }
        else if (X == dx && Y == dy) {
            resp += "D";
        }
    }
    cout << resp;
    return 0;
}
