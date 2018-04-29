#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string num = "";

    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        num += a;
    }

    for (int i = 0; i < n; i++) {
        if (num[i] != num[num.length()-i-1]) {
            cout << "NO";
            break;
        } else if (i == n-1) {
            cout << "SI";
        }
    }

    return 0;
}
