#include "defs.h"
#include <stdlib.h>

void Primarios()
{
	// Operadores Primaros
	// Paréntesis
	PR(d, (3 + 4)); NL;
	PR(d, (3 + 4) * 5); NL;
	PR(f, 5/9.0 * (80 - 32)); NL;
	PR(d, (2 + 2) - (3 + 3)), NL;  // Asociatividad
	// llamada a función
	printf("Hola Mundo\n");

	// Indice de Arreglo
	PR(d, Arreglo[1]); NL;

	// Punto
	Juanito.edad = 20;
	PR(d, Juanito.edad); NL;

	// Flecha
	ptrJuanito = &Juanito;
	PR(d, ptrJuanito->edad); NL;
}

int main(void)
{
	// Operadores Unarios
	// Negación Logica (!)
	a = 5;
	PR(d, a); NL;
	PR(d, !a); NL;
	PR(d, !!a); NL;
	PR(d, !!!!!!a); NL;

	system("pause");
}