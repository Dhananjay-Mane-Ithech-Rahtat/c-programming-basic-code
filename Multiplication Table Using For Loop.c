#include <stdio.h>
int main() 
{
int a,b,c;
printf("Please Enter Number for it's table\n");
scanf("%d",&b);
printf("Multiplication Table\n");
for(a=1;a<11;a++)
{
c=a*b;
printf("%d\n",c);
}
return 0;
}