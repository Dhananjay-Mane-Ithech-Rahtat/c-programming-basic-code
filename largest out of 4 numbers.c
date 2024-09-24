#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Program to find the greatest of 4 numbers\n");
printf("Please Enter The Four Numbers One By One\n");
scanf("\n%d",&a);
scanf("\n%d",&b);
scanf("\n%d",&c);
scanf("\n%d",&d);
printf("Submitted Numbers are:\n");
printf("a:%d\n",a);
printf("b:%d\n",b);
printf("c:%d\n",c);
printf("d:%d\n",d);
if(a>=b && a>=c && a>=d)
{
printf("a is the largest number\n");
}
else if (b>=a && b>=c && b>=d)
{
printf("b is the largest number\n");
}
else if(c>=a && c>=b && c>=d)
{
printf("c is the largest number\n");
}
else 
{
printf("d is the largest number\n");
}
return 0;
}