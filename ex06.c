#include <stdio.h>
#include <string.h>
#include <time.h>
int main()
{
char str_age[5],str_ret_age[5];
int age,ret_age,current_year;
time_t rawtime;
struct tm *timeinfo;

time(&rawtime);
timeinfo = localtime(&rawtime);
current_year = 1900+(timeinfo->tm_year);

printf("What is your current age? ");
fgets(str_age,sizeof(str_age),stdin);
str_age[strlen(str_age)-1]='\0';
age=atoi(str_age);

printf("At What age would you like to retire?");
fgets(str_ret_age,sizeof(str_ret_age),stdin);
str_ret_age[strlen(str_ret_age)-1]='\0';
ret_age=atoi(str_ret_age);

printf("You have %d years left until you can retire.\n",ret_age-age);
printf("It's %d, so you can retire in %d\n",current_year,current_year+(ret_age-age));

return 0;
}
