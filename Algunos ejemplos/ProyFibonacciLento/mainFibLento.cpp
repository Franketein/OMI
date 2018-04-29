#include <iostream>
#include <cassert>

// El código que sigue llama a la implementación de un algoritmo lento para calcular un número de Fibonacci.
//
// ¿Qué hay que hacer?:
// 1. Compila el código quue sigue y correlo con la entrada "40", nada mas para que verifiques que es lento.
//    ¿Crees que te daría "time limit exceeded"?.
// 2. Implementa la función fibonacciRapido.
// 3. Quita la linea que que escribe los resultados del algoritmo lento, comenta la linea que lee la entrada,
//    "descomenta" la linea que llama a probadorSolucion, compila el programa, y córrelo.
//    Esto te asegura que el algoritmo rápido regreasa lo mismo que el lento(usa valores de n pequeños).
// 4. Si probadorSolucion() revela un "bug" en tu implementación, depúralo, corrígelo, y repite lo necesario del paso 3.
// 5. Anula la llamada a probadorSolucion, "descomenta" la linea con la llamada a fibonacciRapido (y las lineas que leen la entrada),
//    ¿Cómo funcionaría este programa en el probador de omegaUp?.
// 6. Elimina los prefijos std:: y "\n" del código.

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
