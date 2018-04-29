#include <iostream>
#include <cmath>
using namespace std;

/**
Programa que resuelve el problema de colocar n reinas en un tablero
de ajedrez de forma que ninguna tome a las dem�s. El tablero est� implementado como una matriz de
booleanos, donde A[i][j] = 1 indica que hay una reina colocada en la fila i columna j.
*/
const int MAX_Q = 4;
bool A[MAX_Q][MAX_Q];

/**
Determina si una reina debe colocarse en una posici�n
*/
bool isSafe(int row, int col){
    int i, j;
    for (i = 0; i < col; i++)
        if (A[row][i])
            return false;
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (A[i][j])
            return false;
    for (i=row, j=col; j>=0 && i<MAX_Q; i++, j--)
        if (A[i][j])
            return false;
    return true;
}
void printSolution(){
    for(int i=0;i<MAX_Q;i++){
        for(int j=0;j<MAX_Q;j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
/**
Considera la funci�n solve(x)
nota que es una funci�n MUY similar a la DFS,
con la diferencia que hay una condcion de parada. Esta funci�n
regresa un valor, �xito (1) o no �xito(0). Nota que depende del valor que regrese (si es que regresa algo)
Esto garantiza solamente considerar EL PRIMER estado que haya regresado verdadero, lo que implica regresar la
primera soluci�n solamente.
*/
bool solve(int row){
    //Condicion de parada, se encontr� una soluci�n regresamos verdad
    if(row==MAX_Q){
        return true;
    }
    for(int i=0;i<MAX_Q;i++){
        if(isSafe(i,row)){
            /**
                Intentamos esta soluci�n
            */
            A[i][row] = 1;
            /**
            Nota que esta condicion se cumple si la condici�n de parada se cumple
            */
            if(solve(row+1)){
                return true;
            }
            else{
                /**Si no llegamos a una soluci�n entonces debemos desmarcar, es decir
                si solve(x) regresa falso, entonces este segmento de c�digo se ejecuta*/
                A[i][row] = 0;
            }
        }
    }
    //No llegamos a ninguna solucion, regresar falso.
    return false;
}
int main(){
    if(solve(0)){
        cout << "Solucion encontrada \n\n";
        printSolution();
    }
    return 0;
}
