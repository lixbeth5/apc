#include <stdio.h>


int main()
{
	int edad;
	printf("ingresa tu edad \n");
	scanf("%d",&edad);
	if(edad >=18)
	{
		printf("eres mayor de edad\n");
	}else if(edad==17){
		printf("ya eres chavoruco\n");
	}else{
		printf("eres menor de edad\n");
	}
	return 0;
}
