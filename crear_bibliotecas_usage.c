/* compilariamos con los siguientes comandos
--gcc crear_bibliotecas_implementacion.c crear_bibliotecas_usage.c -o crear_bibliotecas_usage
corremos asi:
--./crear_bibliotecas_usage Lizbeth
 */
#include <stdio.h>
#include <stdlib.h>
#include "crear_bibliotecas_encabezado.h"

int main(int argc, char * argv[])
{
	hello(argv[1]);
	return 0;
	
}
