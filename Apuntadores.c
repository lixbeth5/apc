/* Apuntadores 
Los punteros solo pueden almacenar direcciones de memoria
el paso de parametros en c es por valor pero haciendo uso 
de punteros se hace un paso por referencia.
se definen asi:
tipo * nombre = &nombredelavariablequeapunta
un puntero no inicializado apunta a null

 *   el operador de desreferenciacion aplicado a un apuntador
obtiene el objeto al cual señala


 &  el operador de referenciacion obtiene la direccion 
de una variable u objeto solo se aplica a objetos en memoria
 */
#include <stdio.h>
#include <stdlib.h>//para usar malloc


void cubo(int *n);

int main()
{
	int var1 = 10;
	//declaramos el apuntador
	int *apEntero =&var1; //lo mismo que int* apEntero =&var1
	
	printf("valor de var1 : %d\n", var1);
	printf("el valor del apuntador : %p \n", apEntero);
	
	
	//aqui se cambia el valor 
	*apEntero =30;
	
	printf("el valor de var1 : %d", var1);
	
	printf("\n\n");



 



	
	
	/**
	 * variables cuyos valores son direcciones de memoria
	 * 
	 */
	 
	 //& operador de referenciacion
	//* operador de derreferenciacion
	 int a = 2;
	 int *apt = &a; //declaracion y asignacion de un apuntador *compiladorYOSOYunAPUNTADOR &hace referencia a la direccion de memoria a la que va apuntar
	 printf("%p\n",apt);//asi imprimo la direccion en hexadecimal 
	
	
	/**
	 * vamos a ver como se usa malloc y sizeof
	 */
	  //cuanta memoria usa la variable
	 int x;
	 x=sizeof(int);
	 printf("el tamano del entero x no apuntador%i\n",x);
	 
	 int *b;
	 b = malloc(sizeof(int)); //sizeof(int) tamaño de una variable entera
	 printf("el tamaño de un entero apuntador %i\n",*b);
	 
	 //veamos que pasa en un arreglo
	 
	 
	
	 /**
	  * veamos como podemos evitar la sobrecarga de valores usando mejor 
	  * las direcciones de memoria para una funcion(referencias) o apuntadores esto 
	  * ocurre cuando la funcion va ha hacer una modificacion directamente
	  * sobre la memoria, llamadas por referencia en metodos
	  */
	  
	  int num =5;
	  printf("valor original %i \n",num);
	  cubo(&num);
	  printf("el nuevo valor %i\n",num);
	  
	return 0;
}

void cubo(int* n){
	int y = *n;
	y= y*y*y;
	*n=y;
	return;
	}
