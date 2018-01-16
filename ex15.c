#include <stdio.h>
int main()
{
const char password[] = "abcde";
char input[10];

printf("What is the password: ");
scanf("%s",input);

if(strcmp(password,input)==0){
printf("Welcome!\n");
} else{
printf("That password is incorrect.\n");
}

return 0;
}
