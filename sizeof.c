/* sizeof */
#include <stdio.h>


size_t getsize(float *ptr);


int main()
{
	float array[20];
	printf("El numero de bytes en el arreglo es: %lu \n",sizeof(array));
	printf("El numero devuelto de bytes por getsize: %lu \n", getsize(array));
	return 0;
	
}

size_t getsize(float *ptr)
{
	return sizeof(ptr);
}
