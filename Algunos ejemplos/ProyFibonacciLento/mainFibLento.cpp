#include <iostream>
#include <cassert>

// El c�digo que sigue llama a la implementaci�n de un algoritmo lento para calcular un n�mero de Fibonacci.
//
// �Qu� hay que hacer?:
// 1. Compila el c�digo quue sigue y correlo con la entrada "40", nada mas para que verifiques que es lento.
//    �Crees que te dar�a "time limit exceeded"?.
// 2. Implementa la funci�n fibonacciRapido.
// 3. Quita la linea que que escribe los resultados del algoritmo lento, comenta la linea que lee la entrada,
//    "descomenta" la linea que llama a probadorSolucion, compila el programa, y c�rrelo.
//    Esto te asegura que el algoritmo r�pido regreasa lo mismo que el lento(usa valores de n peque�os).
// 4. Si probadorSolucion() revela un "bug" en tu implementaci�n, dep�ralo, corr�gelo, y repite lo necesario del paso 3.
// 5. Anula la llamada a probadorSolucion, "descomenta" la linea con la llamada a fibonacciRapido (y las lineas que leen la entrada),
//    �C�mo funcionar�a este programa en el probador de omegaUp?.
// 6. Elimina los prefijos std:: y "\n" del c�digo.

int fibonacciLento(int n)
{
    if (n <= 1)
        return n;

    return fibonacciLento(n - 1) + fibonacciLento(n - 2);
}

int fibonacciRapido(int n)
{
    // POR HACER
    return an;
}

void probadorSolucion()
 {
    assert(fibonacciRapido(3) == 2);
    assert(fibonacciRapido(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacciRapido(n) == fibonacciLento(n));
}

int main()
{
    int n = 0;
    std::cin >> n;

    std::cout << fibonacciLento(n) << '\n';
   // probadorSolucion();
   // std::cout << fibonacciRapido(n) << '\n';
    return 0;
}
