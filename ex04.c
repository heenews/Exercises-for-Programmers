#include <stdio.h>
#include <string.h>
int main()
{
char noun[100],verb[100],adjective[100],adverb[100];

printf("Enter a noun: ");
fgets(noun,sizeof(noun),stdin);
noun[strlen(noun)-1]='\0';

printf("Enter a verb: ");
fgets(verb,sizeof(verb),stdin);
verb[strlen(verb)-1]='\0';

printf("Enter an adjective: ");
fgets(adjective,sizeof(adjective),stdin);
adjective[strlen(adjective)-1]='\0';

printf("Enter an adverb: ");
fgets(adverb,sizeof(adverb),stdin);
adverb[strlen(adverb)-1]='\0';

fprintf(stdout,"Do you %s your %s %s %s? That's hilarious!\n",verb,adjective,noun,adverb);

return 0;
}
