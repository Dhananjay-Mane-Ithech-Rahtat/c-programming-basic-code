#include<stdio.h>
int main() 
{
int a=0; int b=0;
printf("Sum Of First 10 natural numbers:\n");
while(a<10)
{
a++;
b=b+a;
}
printf("%d\n",b);
return 0;
}