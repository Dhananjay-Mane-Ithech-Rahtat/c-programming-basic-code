#include<stdio.h>
int main()
{
int a=0; int b=0; int n=0;
printf("Addition of first 'n' natural numbers\n");
printf("please enter the value of 'n'\n");
scanf("%d",&n);
while(a<n)
{
a++;
b=b+a;
}
printf("\nSum is:%d",b);
return 0;
}
