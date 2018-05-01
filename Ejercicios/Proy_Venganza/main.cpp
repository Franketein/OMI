#include <iostream>
#include <math.h>

using namespace std;

int binaryToBase10(int n)
{
    int output = 0;

    for(int i=0; n > 0; i++) {

        if(n % 10 == 1) {
            output += (1 << i);
        }
        n /= 10;
    }

    return output;
}

int main()
{
    int N;
    int m;
    int M;
    int result;
    cin >> N >> m >> M;
    result = fmod(pow(N, binaryToBase10(M)), m);
    cout << result << endl;
    return 0;
}
