/* instruccion switch*/
#include <stdio.h>



int main()
{
	int casos;
	printf("ingresa un numero\n");
	scanf("%i", &casos);
	switch(casos)
	{
		case 1:
		printf("elegiste el primer caso \n");
		break;
		
		case 2:
		printf("elegiste el segundo caso\n");
		break;
		
		case 3:
		printf("elegiste el tercer caso\n");
		break;
		
		default:
		printf("no encontramos un caso\n");
		break;
		
		}

	return 0;
	
}
