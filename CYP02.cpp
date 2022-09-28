#include <stdio.h>

void main()
{
	int posicion, tamano, posicionHEXA, tamanoHEXA, c1, c2;
	c1 = 0000;
	c2 = 0000;
	scanf_s("%i", &tamano);
	scanf_s("%i", &posicion);
	
	tamanoHEXA = tamano;
	posicionHEXA = posicion;

	printf("%c%c%08X%04i%04i%08X", 66, 77, tamanoHEXA, c1, c2, posicionHEXA);
	



}
