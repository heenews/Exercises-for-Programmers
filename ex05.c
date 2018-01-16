#include <stdio.h>
int main()
{
char num1[100],num2[100];
int number1, number2;

printf("What is the first number? ");
scanf("%s",num1);
printf("What is the second number? ");
scanf("%s",num2);

number1 = atoi(num1); number2 = atoi(num2);

fprintf(stdout,
"%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n"
,number1,number2,number1+number2
,number1,number2,number1-number2
,number1,number2,number1*number2
,number1,number2,number1/number2);
return 0;
}
