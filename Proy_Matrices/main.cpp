#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int N, M, L;
    //A = NxM , B = MxL
    N = 6;
    M = 7;
    L = 8;

    cin >> N >> M >> L;

    int A[N][M] = {0};
    int B[M][L] = {0};
    int P[N][L] = {0};

    srand (time(NULL));

    //Rellenar A
    //int cont = 0;
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<M; j++)
        {
            int randNum = rand() % (100 + 1 - 10) + 10;
            A[i][j] = randNum;
            cout<<A[i][j]<<" ";
            //cont++;
        }
        cout<<endl;
    }
    cout<<endl;

    //cont = 0;
    //Rellenar B
    for (int i = 0; i<M; i++)
    {
        for (int j = 0; j<L; j++)
        {
            int randNum = rand() % (100 + 1 - 10) + 10;
            B[i][j] = randNum;
            cout<<B[i][j]<<" ";
            //cont++;
        }
        cout<<endl;
    }
    cout<<endl;

    //Multiplicar AxB
    int multiplicaciones = 0;
    int sumas = 0;
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<L; j++)
        {
            int resultado = 0;
            for (int a = 0; a<M; a++)
            {
                resultado+=A[i][a]*B[a][j];
                multiplicaciones++;
                sumas++;
            }
            P[i][j] = resultado;
            sumas--;
            cout<< P[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<multiplicaciones<<" multiplicaciones y "<<sumas<<" sumas"<<endl;
    return 0;
}
