#include<stdio.h>
int main()
{
int p;
printf("\nOdd Numbers Between 1 to 100 are:");
for(p=1;p<101;p++)
{
if(p%2==1)
printf("\n%d",p);
}
}