    #include <iostream>

    using namespace std;

    int main()
    {
        long long n, k;
        cin >> n >> k;
        long long total = 0;
        long long tope = k;
        long long suma = 0;
        for (long long i = 0; i<n; i++)
        {
            long long alto;
            cin >> alto;
            suma++;
            //cout<<alto<<" "<<suma<<" "<<tope<<endl;
            if (suma>=k|| alto>=tope || i == 0 || i==n-1)
            {
                total++;
                tope = alto+k;
                suma = 0;
                //cout<<i<<endl;
            }
        }
        cout<<total;
        return 0;
    }
