#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    cout << sizeof(bool) << endl;
    cout << sizeof(short) << " " << SHRT_MIN << " " << SHRT_MAX <<endl;
    cout << sizeof(int)<< " " << INT_MIN << " "<< INT_MAX<<endl;
    cout << sizeof(long)<< " " << LONG_MIN<<" "<<LONG_MAX <<endl;
    cout << sizeof(long long)<< " " << LLONG_MIN<< " " << LLONG_MAX <<endl;
    cout << sizeof(float)<< " " << FLT_MIN<< " " << FLT_MAX << endl;
    cout << sizeof(double)<< " " << DBL_MIN<<" " << DBL_MAX <<endl;
    cout << sizeof(long double)<< " " << LDBL_MIN << " " << LDBL_MAX << endl;
    return 0;
}
