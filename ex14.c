#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char amount[10];
char state[10];
double total;

printf("What is the order amount? ");
fgets(amount,sizeof(amount),stdin);
amount[strlen(amount)-1]=0;

printf("What is the state? ");
fgets(state,sizeof(state),stdin);
state[strlen(state)-1]='\0';

total = atof(amount);

if(strcmp(state,"WI")==0){
    printf("\nThe subtotal is $%.2lf\n",total);
    printf("The tax is $%.2lf\n",total*0.055);
    total = total+total*0.055;
} 

printf("The total is $%.2f\n",total);

return 0;
}
