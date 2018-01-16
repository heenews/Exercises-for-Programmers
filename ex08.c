#include <stdio.h>
int main()
{
int persons, pizzas, pieces, each_person_get_pieces, leftover;
 
printf("How many people? ");
scanf("%d",&persons);
printf("How many pizzas do you have? ");
scanf("%d",&pizzas);
printf("How many pieces are in a pizza? ");
scanf("%d",&pieces);

each_person_get_pieces = (pizzas*pieces)/persons;
leftover = (pizzas*pieces)%persons;

printf("%d people with %d pizzas\nEach person gets %d pieces of pizza.\nThere are %d leftover pieces.\n",persons,pizzas,each_person_get_pieces,leftover);

return 0;
}
