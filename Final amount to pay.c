#include<stdio.h>
int main()
{
float amount,discount=0,delivery=0,final;
int membership;
printf("enter amount");
scanf("%f",&amount);
printf("enter membership");
scanf("%d",&membership);
if(amount >= 500)
{
delivery=0;
if(membership==1)
 discount = 0.10*amount;
 }
 else
 {
 delivery = 50;
 }
 final = amount - disount + delivery;
 printf("final amount =%.2f\n",final amount);
 }
 
