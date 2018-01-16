#include <stdio.h>
#include <math.h>
int main()
{
int length, width, square_feet;
const double square_feet_to_meter = 0.09290304f;
const double liter_cover_square_meter = 9.0f;
double square_meter, total_liters;


printf("What is the length of the room in feet? ");
scanf("%d",&length);
printf("What is the width of the room in feet? ");
scanf("%d",&width);

// Calculation part
square_feet = length*width;
square_meter = square_feet*square_feet_to_meter;
total_liters = square_meter/liter_cover_square_meter;

printf("You will need to purchase %d liters of paint to cover %f square meter\n",(int)ceil(total_liters),square_meter);


return 0;
}
