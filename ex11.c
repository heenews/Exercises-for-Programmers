#include <stdio.h>
int main()
{
double amount_to, rate_to=100, amount_from, rate_from;

printf("How many Euros are you exchanging? ");
scanf("%lf",&amount_from);
printf("What is the exchange rate? ");
scanf("%lf",&rate_from);

amount_to = (amount_from*rate_from)/rate_to;

printf("\n%d Euros at an exchange rate of %.2f is\n%.2f dollars\n",(int)amount_from,rate_from,amount_to);

return 0;
}
