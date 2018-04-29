#include <iostream>
#include <string>


using namespace std;

int main()
{
	// Pide el nombre
	cout << "Por favor escribe tu nombre: ";

	// Se lee
	string nombre;
	cin >> nombre;

	// Se construye la cadena mensaje
	const string SALUDO = "Hola, " + nombre + "!";

	// El número de blancos que rrodea alsaludo
	const int RELLENO = 1;

	// El número de filas y columnas
	const int FILAS = RELLENO * 2 + 3;
	const string::size_type COLUMNAS = SALUDO.size() + RELLENO * 2 + 2;

	// Escribe una linea en blanco para separar la salida de la entrada
	cout << endl;

	// Escribe la cantidad de filas calculada
	// invariante: se han escrito f filas asta ahora
	for (int f = 0; f != FILAS; ++f)
    {

		string::size_type c = 0;

		// invariante: se han escrito c caracteres hasta ahora, en la fila actual
		while (c != COLUMNAS)
        {

			// ¿Ya se puede escribir el saludo?
			if (f == RELLENO + 1 && c == RELLENO + 1)
            {
				cout << SALUDO;
				c += SALUDO.size();
			}
			else
            {

				// ¿Estamos en el borde?
				if (f == 0 || f == FILAS - 1 ||
				    c == 0 || c == COLUMNAS - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}

		cout << endl;
	}

	return 0;
}

