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

void unarios()
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

	// Dierección (&) y Indirección -(*)
	ptrJuanito = &Juanito;  // la direccion de memoria de Juanito
	strcpy(Juanito.nombre, "Juan Pérez");
	ptrJuanito->edad = 30;
	printf("Juanito esta en la dirección %p y ahi hay guardado %s\n", &Juanito, ptrJuanito->nombre );

	a = 20;
	b = 10;
	PRINT1(d, a);
	ptr = &a;		//  Dirección de...
	*ptr = 30;		//  El contenido de ...
	PRINT1(d, a); 

	// cast (tipo de dato)
	car = 75;
	PRINT1(d,car);
	PRINT1(c,car);

	a = car;		// Promocion de tipos:  char -> int
	f = a;			// int -> float
	h = f;			// float -> double;
	f = h;			// "Pérdida de presición"

	a = (int) car;	// Conversión de char a int
	f = (float) a;	// Conversión de int a float
	h = (double) f;	// Conversión de float a double
	f = (float) h;	// Conversión de double a float

	f = 3;

	PRINT1(d, 5 / 2);
	PRINT1(f, ((float) 5) / 2);
}

void Multiplicativos()
{
	// Operadores Multiplicativos 
	// Multiplicación   (*)
	PRINT1(d, 5 * 4);

	// División (/)
	PRINT1(d, 5 / 2);  //  División entera
	PRINT1(f, 5.0 / 2); // División
	PRINT1(f, 5 / 2.0);

	// Módulo  (%)
	printf("5 %% 2 = %d\n", 5 % 2);
}

void Aditivos()
{
	// Aditivos
	// Suma (+)
	PRINT1(d, 50 + 300);
	// Resta (-)
	PRINT1(d, 50 - 300);
}

void Desplazamiento()
{
	//  Desplazamiento
	// Desplazamiento a la derecha (<<)
	a = 27;
	PRINT1(d, a << 1);
	PRINT1(d, a << 2);
	PRINT1(d, a << 3);

	// Desplazamiento a la izquierda (>>)
	a = 216;
	PRINT1(d, a >> 1);
	PRINT1(d, a >> 2);
	PRINT1(d, a >> 3);

	PRINT1(d, 11 >> 1);
}

int main(void)
{
	//  Operadores Relacionales
	PRINT1(d, 5 > 2);
	PRINT1(d, 5 >= 2);
	PRINT1(d, 5 < 2);
	PRINT1(d, 5 <= 2);

	a = 0;
	PRINT1(d, (!5 > a++));
	PRINT1(d, (!!5 > a++));

	a = 0;
	PRINT1(d, (!!5 > a++));

	system("pause");
}