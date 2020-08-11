/* ARITMETICA DE PUNTEROS 
las operaciones de incremento y decremento con punteros tiene sentido
y hay manera de definir estas operaciones veamos:
*/



#include <stdio.h>




int main()
{
    int n = 5;
    int * pn = &n;
    char c = 'A';
    char * pc = &c;
	
    printf("Antes pi = %p y pc = %p \n",pn,pc);
    pn=pn +1;
    pc=pc +1;
    printf("despues pi = %p y pc = %p \n",pn,pc);
    pn--;
    pc--;
    printf("ahora son lo que al inicio pi = %p y pc = %p \n",pn,pc);

	return 0;
	
}

/*
Como pudemos ver c tiene la capacidad de aumentar de acuerdo al tipo 
de variable del apuntador por eso tiene un tipo 
*/