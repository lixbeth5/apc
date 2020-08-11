/*
Son conjuntos que tienen un nombre y elementos inmutables
en su interior , una vez declarados no se aumentan ni cambian,
los identificadores de los elementos siguen las reglas para 
nombrar variables no debenen empezar en numero ni tienen tipo
los elementos del enum empienzan en 0 y continuan asi 
*/

/*
#include <stdio.h>
enum weekDays {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main(){
    enum weekDays today;
    today = Monday;
    printf("Day %d", today+1);
    return 0;
}
*/

/*
#include <stdio.h>
enum deck 
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15,
} card;

int main(){
    card = spades;
    printf("Card Value %d", card);
    return 0;
}
*/