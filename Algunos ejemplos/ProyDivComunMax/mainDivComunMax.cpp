#include <iostream>

using namespace std;

int main()
{
  //Este programa supone que a, b >= 0
  long long a;
  long long b;

  long long dcm = 0;

  cin >> a;
  cin >> b;

  if(a < b)
  {
    long long temp = a;
    a = b;
    b = temp;
  }

  if(a == 0)
    dcm = b;
  else
  {
    for(long long t =1; t<= a; t++)
    {
      if(a%t == 0 && b%t ==0)
      {
        dcm = t;
      }
    }
  }

    cout << dcm << endl;
    return 0;
}
