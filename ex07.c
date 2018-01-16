#include <stdio.h>
int main()
{
int length, width, square_feet;
const double square_feet_to_meter = 0.09290304f;
double square_meter;

printf("What is the length of the room in feet? ");
scanf("%d",&length);
printf("What is the width of the room in feet? ");
scanf("%d",&width);

// Calculation part
square_feet = length*width;
square_meter = square_feet*square_feet_to_meter;


// Printing part
printf("You entered dimensions of %d feet by %d feet\nThe area is\n%d square feet\n%.3f square meters\n",length,width,square_feet,square_meter);

return 0;
}
