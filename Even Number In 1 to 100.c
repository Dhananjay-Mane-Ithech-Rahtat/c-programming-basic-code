#include<stdio.h>
int main()
{
int p;
printf("\nEven Numbers Between 1 to 100 are:");
for(p=1;p<101;p++)
{
if(p%2==0)
printf("\n%d",p);
}
}