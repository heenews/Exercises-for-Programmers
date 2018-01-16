#include <stdio.h>
#include <string.h>
int main()
{
char quote[300];
char name[100];

printf("What is the quote? ");
fgets(quote,sizeof(quote),stdin);
printf("Who said it? ");
fgets(name,sizeof(name),stdin);

quote[strlen(quote)-1]='\0';
name[strlen(name)-1]='\0';
fprintf(stdout,"%s says, \"%s.\"\n",name,quote);

return 0;
}
