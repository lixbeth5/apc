/* Apuntadores en un arreglo 
Todo arreglo es un puntero pero no todo puntero es un arreglo 
Cuando defines un arreglo realizas estos procesos:
1.- Reserva de memoria
2.-Creacion de un puntero
3.-Asignacion del puntero
con algo asi:
int a[10];
esto es lo que ocurre:
a[5] =*(a+5);
tomamos el puntero de la primera posicion y luego le agregamos el dezplazamiento 
usando aritmetica de punteros, si te desbordas del contenido los resultados pueden 
ser inesperados en caso de lectura por que no lo marcara como un error, pero para
escritura si nos mostrara un mensaje de error para no desestabilizar o colapsar 
el sistema operativo.
 */
#include <stdio.h>


int main()
{
	/**
	 * un apuntador puede dezplazarse para mostrarnos los elementos de
	 * un arreglo ello debido a que los arreglos tienen una seccion de 
	 * memoria 
	 */
	 
	 int arreglito[10]={1,2,3,4,5,6,7,8,9,10};
	 int *apArray = arreglito;
	 
	 //te dezplazas la magnitud del tipo que guardas en el arreglo
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	apArray++;
	printf("aqui desbordamos el arreglo: ");
	printf("Contenido de la direccion %p de memoria apuntada por apArray : %d\n",&apArray, *apArray);
	
	return 0;
	
}
