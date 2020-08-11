/* arreglos */
#include <stdio.h>

//los arreglos son uniformes del mismo tipo sus elementos y estaticos no cambia su tamaño
//inician en la posicion 0

int main()
{
//creacion del arreglo
	int arreglo[4]={3,4,5,1};
	printf("%i\n", arreglo[2]);
//arreglo unidimensional y su impresion	
	int tam;
	printf("tamano del arreglo\n");
	scanf("%i",&tam);
	int age[tam];
	for(int i =0;i<tam;i++){
		printf("ingresa el valor%i\n",i+1);
		scanf("%i", &age[i]);
		}
	
	printf("los valores del arreglo son:\n");
	for(int i =0; i< tam;i++){
		printf("  %i- ", age[i]);
		}
	printf("\n");	
//arreglo multidimencional
//fila0 |5 6 7
//fila1 |1 2 3
//multi[filas][columnas]	
	
	int multi[2][3] = {{5,6,7},{1,2,3}};
	printf("%i\n", multi[1][1]);
	
	for(int filas=0;filas<2;filas++){
		for(int columnas = 0; columnas <3;columnas++){
			printf(" %i ",multi[filas][columnas]);
			
			}
			printf("\n");
		
		}
	
	return 0;
}
