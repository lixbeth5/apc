/*tipos de datos con sus repectivas placeholders
%07i  ----> justificado a la derecha, 7 digitos de largo sin relleno
%7i   ----> largo minimo de 7 digitos justificado a la derecha rellena con ceros
%8.2f ----> tamano total de 8 digitos con dos decimales 
%.*f"',x,d) ---->tamano predeterminado x numeros decimales
%*.*f",x,y,d) ---->tamano igula a x, y numeros decimales
%s ----> cadena terminada en null
%5s ----> cinco primeros caracteres sin tener en cuenta el delimitador
%20.5s ----> cinco primeros caracteres justificando a la derecha , con 20 caracteres de largo
%-20.5s primeros 5 caracteres justificando a la izquierda, con 20 caracteres de largo
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
	
	long long int bienlargo= 888888888888; //entero de 8 bytes 
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
