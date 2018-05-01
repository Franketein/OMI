#include <iostream>

using namespace std;

int main()
{
    int col;
    int fil;
    int n;
    cin>>fil>>col>>n;
    int cuadro[fil][col];
    bool exit = false   ;

    //Iniciar variables
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cuadro[i][j] = 0;
        }
    }

    int x = 0;
    int y = 0;
    for (int i = 0; i < n*2; i++)
    {
        int z;
        cin>>z;
        if ((i+1)%2 != 0)
        {
            x = z;
        }
        else
        {
            y = z;
            cuadro[x-1][y-1] = 1;
        }
    }


    //Detectar cuadros???
    int mayor = 0;

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            while (!exit)
            {
                bool sinHueco = true;
                int v = 0;
                while (true)
                {
                    for (int a = 0; a < v; a++)
                    {
                        for (int b = 0; b < v; b++)
                        {
                            if (cuadro[i+a][b] == 0 && cuadro[a][j+b] == 0 && cuadro[i+a][j+b] == 0)
                            {
                                sinHueco = true;
                               // cout<<a<<" y "<<b<<endl;
                            }
                            else
                            {
                                sinHueco = false;

                                break;
                            }
                        }
                        if (sinHueco == false)
                        {
                            break;
                        }
                    }
                    if (!sinHueco)
                    {
                        //cout<<v<<" con hueco"<<endl;
                        exit = true;
                        break;
                    }
                    v++;
                    //cout<<"se sumó uno"<<endl;
                }

                if (v>=mayor)
                {
                    mayor = v;
                    //cout<<"new best"<<endl;
                }
                else
                {
                    //cout<<"no llegó: "<<v<<" vs "<<mayor<<endl;
                }
                //cout<<i<<","<<j<<" = "<<cuadro[i][j]<<" y temp="<<v<<endl;
                exit = true;
            }
            exit = false;
        }
    }

    if (fil == col)
    {
        mayor--;
    }

    int resp = mayor;

    cout<<resp<<endl;

 	return 0;
}

