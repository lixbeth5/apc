/*directivas*/

#include <stdio.h> //busca en los encabezados de biblioteca estandar
//#include "archivo" busca en el directorio que se encuentra
#define CUBO(a) a*a*a
#define PI 3.14159

int main()
{
	int suma;
	suma =PI +3;
	printf("el cubo de la variable a es: %i\n", CUBO(suma));
	return 0;
}
