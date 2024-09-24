#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
float avg;
printf("Pass Or Fail\n");
printf("Enter Marks out of hundred\n");
printf("Please Enter Marks In Marathi\n");
scanf("%d",&a);
if(a>100)
{
printf("Error\n");
return 0;
}
else if(a<35)
{
printf("You Have Failed\n");
return 0;
}
printf("Please Enter Marks In English\n");
scanf("%d",&b);
if(b>100)
{
printf("Error\n");
return 0;
}
else if(b<35)
{
printf("You Have Failed\n");
return 0;
}
printf("Please Enter Marks In History\n");
scanf("%d",&c);
if(c>100)
{
printf("Error\n");
return 0;
}
else if(c<35)
{
printf("You Have Failed\n");
return 0;
}
printf("Please Enter Marks In Geography\n");
scanf("%d",&d);
if(d>100)
{
printf("Error\n");
return 0;
}
else if(d<35)
{
printf("You Have Failed\n");
return 0;
}
printf("Please Enter Marks In Maths\n");
scanf("%d",&e);
if(e>100)
{
printf("Error\n");
return 0;
}
else if(e<35)
{
printf("You Have Failed\n");
return 0;
}
printf("Please Enter Marks In Science\n");
scanf("%d",&f);
if(f>100)
{
printf("Error\n");
return 0;
}
else if(f<35)
{
printf("You Have Failed\n");
return 0;
}
avg=(a+b+c+d+e+f)/6;
printf("Your Marks In Percent:%f\n",avg);
  if(avg<35)
  {
  printf("Result:Fail\n");
  }
  else if(avg>35 && avg<61)
  {
  printf("Second Class\n");
  }
  else if(avg>60 && avg<=75)
  {
  printf("First Class\n");
  }
  else if (avg>75 && avg<101)
  {
  printf("Distinction\n");
  }
}