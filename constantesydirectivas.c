/* Las constatentes son valores que no presentaran cambios 
a lo largo de la ejecucion del programa es una variable de solo 
lectura.
Por otro lado ls directivas de preprocesador son instrucciones 
que recibe el compilador antes de iniciar con la compilacion 
del programa vienen precedidas por un  #.
 La mas conocida es #include
 
 sin embargo otras que sirven para evitar errores son: 
#ifdef
#ifndef
#else
#elif
#endif
 */

#include <stdio.h>
#define MACROFEA 888.888

const int const_ent = 1;
//si es long 
const int const_int_long = 1l;
//si es unsigned
const int const_int_unsigned = 1u;



int main()
{
	
	return 0;
	
}
