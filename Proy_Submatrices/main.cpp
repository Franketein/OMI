#include <iostream>

using namespace std;

int main()
{
    int ren, col;
    cin >> ren >> col;
    int N[ren][col];
    for (int i = 0; i<ren; i++)
    {
        for (int j = 0; j<col; j++)
        {
            cin >> N[i][j];
        }
    }

    int r, c;
    cin >> r >> c;
    int M[r][c];
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            cin >> M[i][j];
        }
    }

    int resultado[ren][col] = {0};
    for (int i = 0; i<ren; i++)
    {
        for (int j = 0; j<col; j++)
        {
            if (N[i][j] == M[0][0])
            {
                int backup[ren][col];
                for (int i = 0; i<ren; i++)
                {
                    for (int j = 0; j<col; col++)
                    {
                        backup[i][j] = resultado[i][j];
                    }
                }
                bool submatriz = true;
                for (int a = 0; a<r && i+a<ren; a++)
                {
                    for (int b = 0; b<c && j+b<col; b++)
                    {
                        if (N[i+a][j+b] != M[a][b])
                        {
                            submatriz = false;
                            break;
                        }
                        else
                        {
                            cout<<"hola"<<endl;
                            resultado[i+a][j+b] = 1;
                        }
                    }

                    if (submatriz == false)
                    {
                        for (int i = 0; i<ren; i++)
                        {
                            for (int j = 0; j<col; col++)
                            {
                                resultado[i][j] = backup[i][j];
                            }
                        }
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i<ren; i++)
    {
        for (int j = 0; j<col; j++)
        {
            cout<<resultado[i][j];
        }
        cout<<endl;
    }
    return 0;
}
