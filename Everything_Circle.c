#include<stdio.h>

int main()
{
int s;
float r,a;

printf("Everything About Circle\n");
printf("Type Numbers in accordance\n");
printf("Type 1 to find area\n");
printf("Type 2 to find circumference\n");
printf("Type 3 to find diameter\n");
printf("Please Enter operation Code\n");
scanf("%d",&s);
printf("please enter the radius of circle\n");
scanf("%f",&r);
switch (s)
{
{
case 1:
a=3.14*r*r;
printf("\nThe area is%f",a);
break;
}
{
case 2:
a=2*3.14*r;
printf("\nThe Circumference is%f",a);
break;
}
{
case 3:
a=2*r;
printf("\nThe Diameter is%f",a);
break;
}
default:
printf("\nWrong Option Try Again");
break;
}
return 0;

}