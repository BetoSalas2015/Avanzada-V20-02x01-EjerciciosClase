#include "defs.h"
#include <stdlib.h>

void Bases()
{
		a = 179;
	printf("179 Base 10 es %o  base 8\n", a);
	printf("179 Base 10 es %x  base 16\n", a);

	b = 0263;
	printf("263 Base 8 es %d  base 10\n", b);
	printf("263 Base 8 es %x  base 16\n", b);

	c = 0xb3;
	printf("B3 Base 16 es %d  base 10\n", c);
	printf("B3 Base 16 es %o  base 8\n", c);
}

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

	// Operador mas/menos unario
	a = -3; 
	b = +3;
	PRINT2(d, a, b);
	PRINT1(+d,b);

	// Complemento a 1 (~)
	a = 20;
	PRINT2(d, a, ~a);

	// Operadores incremento/decremento (++/--)
	a = 10;
	a++;
	PRINT1(d, a);
	++a;
	PRINT1(d, a);
	a--;
	PRINT1(d, a);
	--a;
	PRINT1(d, a);
	a = 10;
	PRINT1(d, a++);
	a = 10;
	PRINT1(d, ++a);
	a = 10;
	PRINT1(d,a+++b);
	PRINT2(d, a, b);
	a = 10; b = 5;
	PRINT1(d,a++ + ++b);
	PRINT2(d, a, b);
	a = 10; b = 5;
	PRINT1(d,++a + ++b);
	PRINT2(d, a, b);
	a = 5; b = 8; c = 0;
	d = a++ + b-- + !c++;
	PRINT1(d, d);
	PRINT4(d, a, b, c, d);
	
	// Operador sizeof (sizeof)
	printf("El tipo char ocupa %d bytes.\n", sizeof(char) );
	printf("El tipo int ocupa %d bytes.\n", sizeof(int) );
	printf("El tipo float ocupa %d bytes.\n", sizeof(float) );
	printf("El tipo double ocupa %d bytes.\n", sizeof(double) );
	printf("El variable f ocupa %d bytes.\n", sizeof(f) );
	printf("El variable ptrJuanito ocupa %d bytes.\n", sizeof(ptrJuanito) );
	printf("El tipo struct Persona ocupa %d bytes.\n", sizeof(struct Persona) );
	printf("El arreglo Arreglo ocupa %d bytes.\n", sizeof(Arreglo) );




	system("pause");
}