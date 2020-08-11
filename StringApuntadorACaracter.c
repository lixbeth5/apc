/*  Strings 
en c los string no existen como tipo primitivo 
en su lugar se tienen apuntadores a caracter 
C necesita un indicador de donde acaba una cadena es \0
no se tiene que agregar ya que c lo agrega automaticamente
pero si se debe considerar al final de cada cadena cuando 
por ejemplo la imprimimos
*/
#include <stdio.h>


int main()
{
	char * name = "Lizbeth :)";
	printf("Hola %s (yo soy el puntero mira que guardo %p)\n",name, name);

    //recorramos la cadena al ras del puntero
    for (int i = 0; i<7 ; i++){
        printf("Hola [%d](%p) = %c \n", i, name+i,*(name +i));
    }

    //veamos un ejemplo de la extension de un string
    char cadenita[3] = "Liz";
    printf("aqui se imprime Liz sin considerar el caracter indicador de final \0   ");
    printf("aloha! : %s \n",cadenita);
    char cadenitas[4]="Liz";
    printf("paso algo raro vamos a arreglarlo considerando lo anterior   ");
    printf("aloha! : %s \n", cadenitas);
	
	return 0;
}
