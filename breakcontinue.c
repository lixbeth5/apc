/* uso de break y continue*/
#include <stdio.h>



int main()
{
	int num=0;
	//termina el ciclo
	while(num<=7){
		if(num ==2){
			break;
			}
		printf("%i\n",num);
		num++;
		}
		
		
	int num1=0;
	//continue hace un salto en el ciclo
	while(num1<=7){
		num1++;
		if(num1==2){
			num1=5;
			continue;
			}
		printf("%i\n",num1);
		
		}
	
	return 0;
	
}
