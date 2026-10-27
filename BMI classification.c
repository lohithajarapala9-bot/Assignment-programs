#include<stdio.h>
int main()
{
  float weight,height,bmi;
printf("enter weight,height");
scanf("%f%f",&weight,&height);
 bmi = weight / (height * height);
printf("bmi =%.2f\n", bmi);
if(bmi < 18.5)
  printf("\nUnderweight");
else if(bmi < 25)
  printf("\nNormal");
else if(bmi < 30)
  printf("\nOverweight");
  else
  printf("\nObese");
return 0;
}
