#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int x1s[num];
    int y1s[num];
    int x2s[num];
    int y2s[num];
    int largos1[num];
    int anchos1[num];
    int largos2[num];
    int anchos2[num];

    for (int i = 0; i < num; i++)
    {
        cin>>x1s[i];
        cin>>y1s[i];
        cin>>largos1[i];
        //cin>>anchos1[i];
        cin>>x2s[i];
        cin>>y2s[i];
        cin>>largos2[i];
        //cin>>anchos2[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (x2s[i]<x1s[i])
        {
            int tempx = x1s[i];
            int tempy = y1s[i];
            int templ = largos1[i];

            x1s[i] = x2s[i];
            y1s[i] = y2s[i];
            largos1[i] = largos2[i];

            x2s[i] = tempx;
            y2s[i] = tempy;
            largos2[i] = templ;
        }

        if (x2s[i] <= x1s[i] + largos1[i])
        {
            if (x2s[i] + largos2[i] < x1s[i] + largos1[i])
            {
                cout<<"incluida traslape: "<< largos2[i]<<endl;
            }
            else
            {
                cout<<"traslape: "<< x1s[i] + largos1[i] - x2s[i] <<endl;
            }
        }
        else
        {
            cout<<"Sin traslape"<<endl;
        }
    }
    return 0;
}
