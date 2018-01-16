#include <stdio.h>
#include <string.h>
int main()
{
char string[100];

printf("What is the input string? ");
fgets(string,sizeof(string),stdin);
string[strlen(string)-1]='\0';

if(strlen(string)<1)
printf("Please enter more than one character. \n");
else
printf("%s has %d characters.\n",string,strlen(string));

return 0;
}
