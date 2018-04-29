#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int asteriscos = 1;
    int espacios = N-1;
    for (int i =0; i < N; i++) {
        for (int j = 0; j<espacios; j++) {
            cout <<" ";
        }
        for (int j = 0; j<asteriscos; j++) {
            cout <<"*";
        }
        asteriscos+=2;
        espacios--;
        cout<<endl;
    }
    espacios = N-2;
    asteriscos = 3;
    for (int i =0; i < 2; i++) {
        for (int j = 0; j<espacios; j++) {
            cout <<" ";
        }
        for (int j = 0; j<asteriscos; j++) {
            cout <<"#";
        }
        cout<<endl;
    }
    return 0;
}
