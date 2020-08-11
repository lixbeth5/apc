/* Parametros de linea de comandos
La funcion main puede recibir argumentos veamos como
 */
#include <stdio.h>

/*
si estamos en linux la manera de compilar esto es 
gcc archivo.c -o archivo
para ejecutar
./archivo
el sistema manda como primer argumento siempre el nombre del programa
pero ajecutado asi no mandamos mas parametros entonces 
lo mandamos ejecutar asi:
./archivo argumento1 argumento2
*/
int main(int argc, char * argv[])
{
	for (int i =0; i< argc; i++){
	 	printf("Argumento del main %d = %s \n", i , argv[i]);
	}
	return 0;
	
}
