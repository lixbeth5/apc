/* Alias Tipos de Datos
A veces resulta conveniente crear otro tipos de variables,
ó redefinir con otro nombre las existentes, esto se puede 
realizar mediante la palabra "typedef", por ejemplo:
--typedef unsigned long double enorme;

a partir de este momento, las definiciones siguientes 
tienen identico significado :
--unsigned long double nombre_variable;
--enorme nombre_variable;
*/
#include <stdio.h>

long  int numero = 7000;
typedef long int numG;
numG num1 = 7000;



int main()
{
	
	printf(" el numero1 es %Li el numero2 es %Li \n", num1, numero);
	
	return 0;
	
}
