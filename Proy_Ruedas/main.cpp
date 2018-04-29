#include <iostream>

using namespace std;

int main()
{
    char ia, ib, ic, id, fa, fb, fc, fd;
    int n;
    cin >>ia>>ib>>ic>>id>>fa>>fb>>fc>>fd >> n;
    string prohibidas[n];
    for (int i = 0; i < n; i++) {
        char a, b, c, d;
        cin >> a >> b >> c >> d;
        prohibidas[i] = "" + a + b + c + d;
    }

    while (ia != fa || ib != fb || ic != fc || id != fd) {
        if (ia != fa) {
            for (int i = 0; i < n; i++) {
                if (prohibidas[i][0] == ia - '0') {

                }
            }
        }
    }

    return 0;
}
