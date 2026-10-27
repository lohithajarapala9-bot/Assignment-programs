#include<stdio.h>
int main()
{
int id,password;
printf("enter id and password");
scanf("%d%d",&id,&password);
if(id != 101)
  printf("\nUser not found");
else if(password == 4321)
  printf("\nLogin sucessful");
else
  printf("\nInvalid password");
return 0;
}
