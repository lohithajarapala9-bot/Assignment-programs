#include<stdio.h>
int main()
{
  int marks;
printf("enter your marks");
scanf("%d",&marks);
if(mark < 0 || mark > 100)
  printf("\nInvalid marks");
else if(mark >= 90)
  printf("\nGrade O");
else if(mark >= 80)
  printf("\nGrade A+");
else if(mark >= 70)
  printf("\nGrade A");
else if(mark >= 60)
  printf("\nGrade B");
else if(mark >= 50)
  printf("\nGrade C");
else
  printf("\nFail");
return 0;
}

  
