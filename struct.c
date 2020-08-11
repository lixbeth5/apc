/*
Deficion de tipos de datos 
Vamos a crear nuestras propios tipos de datos
usaremos la palabra reservada struct
 */


/* Ejemplo 1: 
//Estructuras 
#include <stdio.h>

struct perro
{
	char nombre[30];
	int edadMeses;
	float peso;
}perro1={"Corraje",10,3.5};


int main()
{
	printf("el nombre de mi mascota es %s pesa %.2f kg tiene %i meses \n ",perro1.nombre, perro1.peso, perro1.edadMeses);
	
	return 0;
	
}
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    struct {
    char name[100];
    int age;
    }person;
	

    if(argc < 3){
        printf("indique nombre y edad: \n");
        return 1;
    }

   if(strlen(argv[1]) < 100){
       strcpy(person.name, argv[1]);
   }
//atoi pertenece a lib y conviete un numero a cadena 
   person.age = atoi(argv[2]);
	
	return 0;
	
}
