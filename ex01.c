#include <stdio.h>
int main()
{
	char name[100];
	char subString1[] = "Hello, ";
	char subString2[] = ", nice to meet you!";
	char fullString[200];

	printf("What is your name?");
	scanf("%s",name);

	sprintf(fullString,"%s%s%s",subString1,name,subString2);

	printf("%s\n",fullString);

	return 0;
}
