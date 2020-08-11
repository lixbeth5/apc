/*
Deficion de tipos de datos 
Vamos a crear nuestras propios tipos de datos
usaremos la palabra reservada struct
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct PERSON{
    char name[100];
    int age;
};

void fillPersonData(struct PERSON * person, const char * name, int age){
    if(strlen(name) < 100){
       strcpy((*name).name, name);
   }

   //este renglon se puede escribir como: strcpy(person->name,name);
   (*person).age =age;
}

int main(int argc, char * argv[])
{
    struct PERSON person;
	

    if(argc < 3){
        printf("indique nombre y edad: \n");
        return 1;
    }

   
    fillPersonData(&person, argv[1], atoi(argv[2]));
    printf("Name = %s, age = %d \n", person.name, person.age)+;
    return 0;
	
}
