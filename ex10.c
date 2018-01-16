#include <stdio.h>
int main()
{
double price1,price2,price3;
int quantity1,quantity2,quantity3;
double subTotal,tax,total;

printf("Price of item 1: ");
scanf("%lf",&price1);
printf("Qantity of item 1: ");
scanf("%d",&quantity1);

printf("Price of item 2: ");
scanf("%lf",&price2);
printf("Qantity of item 2: ");
scanf("%d",&quantity2);

printf("Price of item 3: ");
scanf("%lf",&price3);
printf("Qantity of item 3: ");
scanf("%d",&quantity3);

subTotal = price1*quantity1+price2*quantity2+price3*quantity3;
tax = subTotal*0.055;
total = subTotal + tax;

printf("\nSubtotal: $%.2f\n",subTotal);
printf("Tax: $%.2f\n",tax);
printf("Total: $%.2f\n",total);

return 0;
}
