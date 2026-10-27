#include <stdio.h>
void main()
{
float length,breadth,area,perimeter;
printf(" enter length:");
scanf("%f",& length);
printf(" enter breadth:");
scanf("%f",& breadth);
area= length*breadth;
perimeter=2*(length+breadth);
printf("\n area of rectangle=%2f",area);
printf("\n perimeter of rectangle=%2f", perimeter);
}
