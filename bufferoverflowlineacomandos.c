/* Es un error comun cuando se reciben argumentos 
en la linea de comandos, sucede cuando se copia una cantidad de datos
sobre un campo que no tiene suficiente tamaño para almacenarlos,
produciendose una sobrescritura en las zonas de memoria .
Es el  error mas comun ./del que se aprovechan los hackers
 */
#include <stdio.h>
#include <string.h>

/*

*/
int main(int argc, const char * argv[])
{
    char buffer[20];
    char * buffer2 = "This will be overwritten";
	printf("original buffer2 %s \n", buffer2);
    strpy(buffer, arg[1]);
    printf("New buffer2:  %s\n", buffer2);
	
	return 0;
	
}
