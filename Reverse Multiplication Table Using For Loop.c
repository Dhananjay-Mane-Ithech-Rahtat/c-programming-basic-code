#include <stdio.h>
int main() 
{
int a,b,c;
printf("Please Enter Number for it's reverse table\n");
scanf("%d",&b);
printf("Multiplication Table\n");
for(a=10;a;a--)
{
c=a*b;
printf("%d\n",c);
}
return 0;
}