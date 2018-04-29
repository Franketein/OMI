#include <iostream>

using namespace std;

void selectionSort (int arr[], int largo)
{
    for (int i = 0; i<largo; i++)
    {
        int menor = arr[i];
        int menorIndex = i;
        for (int j = i+1; j<largo; j++)
        {
            if (arr[j] < menor)
            {
                menor = arr[j];
                menorIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = menor;
        arr[menorIndex] = temp;
    }
}

int main()
{
    int N;
    cin >> N;
    int arreglo[N];
    for (int i = 0; i<N; i++)
    {
        cin >> arreglo[i];
    }
    selectionSort(arreglo, N);
    for (int i = 0; i<N; i++)
    {
        cout<< arreglo[i]<<", ";
    }
    return 0;
}
