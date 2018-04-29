#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int books[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>books[i][j];
        }
    }

    int visibles = 0;

    for (int fila = 0; fila < N; fila++)
    {
        for (int col = 0; col < N; col++)
        {
            if (books[fila][col] != 0)
            {
                int pila = books[fila][col];
                if (fila == 0 || fila == N-1 || col == 0 || col == N-1)
                {
                    visibles++;
                    //cout<<fila<<","<<col<<" visible "<<endl;
                }
                else
                {
                    bool upB = true;
                    bool downB = true;
                    bool leftB = true;
                    bool rightB = true;

                    for (int up = fila-1; up >= 0; up--)
                    {
                        if (books[up][col] >= pila)
                        {
                            upB = false;
                            break;
                        }
                    }

                    for (int down = fila+1; down < N; down++)
                    {
                        if (books[down][col] >= pila)
                        {
                            downB = false;
                            break;
                        }
                    }

                    for (int left = col-1; left >= 0; left--)
                    {
                        if (books[fila][left] >= pila)
                        {
                            leftB = false;
                            break;
                        }
                    }

                    for (int right = col+1; right < N; right++)
                    {
                        if (books[fila][right] >= pila)
                        {
                            rightB = false;
                            break;
                        }
                    }

                    if (upB || downB || leftB || rightB)
                    {
                        visibles++;
                        //cout<<fila<<","<<col<<" visible "<<endl;
                    }
                }
            }
        }
    }

    cout<<visibles;
    return 0;
}
