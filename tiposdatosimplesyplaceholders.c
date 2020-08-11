

/* LOS TIPOS BASICOS (recuerda 8 bit = 1 byte):
char 1 byte  -128 a 127
unsigned char 1 byte 0 a 255
int 2 bytes -32 768 a 32 767
unsigned int 2 bytes 0 a 65 535
signed int 2 bytes -32 768 a 32 767
short int 2 bytes -32 768 a 32 767
unsigned short int 2 bytes 0 a 65 535
signed short int 2 bytes -32 768 a 32 767
long int 4 bytes -2147483648 a 2147483647
signed long int 4 bytes -2147483648 a 2147483647
unsigned long int 4 bytes 0 a 4294967295
float 4 bytes 3.4E-38 a 3.4E+38
double 8 bytes 1.7E-308 a 1.7E+308
long double 8 bytes 1.7E-308 a 1.7E+308


El tipo de dato void denota que no hay valor disponible 
se usa en 3 tipos de casos diferentes:
1.- Funcion que retorna un tipo nulo o void (void funcion())
2.- Funcion que tiene argumentos nulos o void (int rand(void))
3.- Puntero o valor que va a la direccion de memoria de un objeto
pero no le importa el tipo de objeto que tenga. 
void 0 bytes sin valores




TIPOS DE DATOS Y PLACEHOLDERS
%c   ---->  Caracter
%d   ---->  Numero entero int
%D   ---->  numero entero long tambien se usa %ld
%i   ---->  numero entero int
%f   ---->  punto flotante
%e   ---->  notacion cientifica e minuscula
%E   ---->  notacion cientifica E mayuscula
%g   ---->  utiliza %f o %e segun sea mas corto
%G   ---->  utiliza %f p % E segun sea mas corto 
%o   ---->  Numero octal sin signo
%s   ---->  cadena de texto
%u   ---->  entero sin signo
%U   ---->  entero sin signo o long tambien %lu
%x   ---->  hexadecimal sin signo con minusculas
%X   ---->  hexadecimal sin signo con mayusculas 
%p   ---->  puntero direccion de memoria
%n   ---->  numero de caracteres
%o   ---->  formato entero octal
%O   ---->  formato entero octal long o tambien %lo
%lf   ---->  formato double
*/




#include <stdio.h>

int main()
{
	char caracter ='y'; //1 byte 0-255
	printf("%c\n",caracter);
	
	short corto = -1;//2 bytes (tambien se llama short int)
	printf("%hd\n",corto);
	printf("%hi\n",corto);
	
	unsigned short int naturalcorto = 1;
	printf("%hu\n",naturalcorto);
	
	int entero = 20;// 4 bytes de -2,147,483,648 - 2,147,483,647
	printf("%d\n",entero);
	printf("%i\n",entero);
	
	unsigned int natural= 50 ;// 4 bytes 0-4,294,967,295
	printf("%d\n",natural);
	
	long largo =5050; // entero de 4 bytes (apodo long int)
	printf("%li\n",largo);
	printf("%ld\n",largo);
	
	long int bienlargo= 8888; //entero de 8 bytes 
	printf("%Li\n",bienlargo);
	
	float flotante = 72.335555;// real 4 bytes
	printf("%f\n",flotante);	//seis decimales tras la coma
	printf("%.2f\n",flotante);	//dos decimales tras la coma
	printf("%e\n",flotante); // notacion cientifica
	printf("%E\n",flotante); // notacion cientifica
	printf("%g\n",flotante); // seis cifras significativas
	printf("%G\n",flotante); // seis cifras significativas
	
	
	
	double dobleflot = 45.8888888888888;//real 8 bytes
	printf("%f\n",dobleflot);	//seis decimales tras la coma
	printf("%.2f\n",dobleflot);	//dos decimales tras la coma
	printf("%e\n",dobleflot); // notacion cientifica
	printf("%E\n",dobleflot); // notacion cientifica
	printf("%g\n",dobleflot); // seis cifras significativas
	printf("%G\n",dobleflot); // seis cifras significativas
	
	long double triplelargo = 45.8888888888888888888888;//real 12 bytes
	printf("%Lf\n",triplelargo);	//seis decimales tras la coma
	printf("%LF\n",triplelargo);	//seis decimales tras la coma
	printf("%.2Lf\n",triplelargo);	//dos decimales tras la coma
	printf("%Le\n",triplelargo); // notacion cientifica
	printf("%LE\n",triplelargo); // notacion cientifica
	printf("%Lg\n",triplelargo); // seis cifras significativas
	printf("%LG\n",triplelargo); // seis cifras significativas
	
	unsigned int sinsigno = 25;
	printf("%u\n",sinsigno);
	
	return 0;
}
