/* funciones recursivas */
#include <stdio.h>

long Factorial(long numero){
	if(numero <= 1){
		return 1;
	}else{
		return(numero * Factorial(numero-1));
		}
}


int main()
{
	//factorial 
	int numero;
	printf("ingresa un numero para sacarle el Factorial \n");
	scanf("%i",&numero);
	printf("%ld\n",Factorial(numero));
	return 0;

}

