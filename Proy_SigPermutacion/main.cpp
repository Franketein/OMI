#include <iostream>
#include <algorithm>

using namespace std;

int particion (int arr[], int inf, int sup)
{
    int pivote = arr[sup];
    int i = inf-1;
    for (int j = inf; j<sup; j++)
    {
        if (arr[j] <= pivote)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap (arr[i+1], arr[sup]);
    return i+1;
}

void quickSort (int arr[], int inf, int sup)
{
    if (inf < sup)
    {
        int indice = particion(arr, inf, sup);

        quickSort(arr, inf, indice-1);
        quickSort(arr, indice + 1, sup);
    }
}

int main()
{
    int N;
    cin >> N;
    int objetos[N];
    for (int i = 0; i<N; i++)
    {
        cin >> objetos[i];
    }
    quickSort(objetos, 0, N-1);
    //sort(objetos + 0, objetos+N);
    for (int i = 0; i<N; i++)
    {
        cout<< objetos[i]<<" ";
    }
    return 0;
}
