#include <iostream>
using namespace std;

const int MAX_N = 4;
bool Q[MAX_N][MAX_N];

void printSolution(){
    for(int i=0;i<MAX_N;i++){
        for(int j=0;j<MAX_N;j++){
            cout << Q[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------" << endl;
}
bool isSafe(int row,int col){
    int i;
    int j;
    for (i = 0; i < col; i++)
        if (Q[row][i])
            return false;
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (Q[i][j])
            return false;
    for (i=row, j=col; j>=0 && i<MAX_N; i++, j--)
        if (Q[i][j])
            return false;
    return true;
}
/**
Función imprime todas las soluciones para el problema de las n reinas, nota que esta
función no tiene valor de retorno en la condicion de parada, por lo que revisa todos los posibles estados
del arbol de recursión, cuando se encuentra en la condicion de parada imprime ese resultado, pero posiblemente
haya otro estado solución en alguna otra rama del árbol, por lo que tiene que ir a buscarlo.
*/
void solveNQueens(int row){
    if(row==MAX_N){
        printSolution();
        return;
    }
    for(int i=0;i<MAX_N;i++){
        if(isSafe(i,row)){
            /**
            Marcamos el posible candidato
            */
            Q[i][row] = true;
            /**
            Distinto a la solución anterior, no hay una condición sobre el valor de retorno de esta llamada recursiva,
            esta es la diferencia entre el esquema algorítimo del backtracking de encontrar UNA solución
            y encontrar TODAS las posibles soluciones
            */
            solveNQueens(row+1);
            /**
            Si llegamos a una rama desmarcamos ese candidato y regresamos al anterior(BACKTRACK)
            .
            Podemos decir que el backtracking es un caso de la Búsqueda por Profundidad (DFS), la única
            diferencia entre este esquema y DFS es este paso, el desmarcar una solución y regresar. Recuerda
            que en la DFS hacemos una exploración de todos los nodos y marcamos (visitamos), pero no desmarcamos.
            */
            Q[i][row] = false;
        }
    }
    return;
}
int main(){
    solveNQueens(0);
    return 0;
}
