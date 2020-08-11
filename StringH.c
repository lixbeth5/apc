/* LibreriaStringH */
#include <stdio.h>
#include <string.h>


int main()
{
	char * str = "Liz";
    //funcion de largo de una cadena 
	printf("str mide %ld caracteres \n", strlen(str));
	//funcion que compara cadenas 
    char * cabeza = "Cien";
    char * cola = "Pies";
    printf("las cadenas son %s \n", strcmp(cabeza,cola)== 0 ? "iguales": "distintos");
    //funcion que copia cadenas 
    char  cabeza2[20] = "nunca me veras";
    strcpy(cabeza2, cabeza);
    printf("las cadenas son %s \n", strcmp(cabeza2,cabeza)== 0 ? "iguales": "distintos");



	return 0;
	
}
