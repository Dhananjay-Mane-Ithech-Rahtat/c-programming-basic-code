#include<stdio.h>
int a; int b; int c; 
void addi();
void sub();
void multi();
void div();
int main()
{
int s;
printf("Calculator Program\n");
printf("Press 1 for addition:(a+b)\n");
printf("Press 2 for substraction:(a-b)\n");
printf("Press 3 for multiplication:(a*b)\n");
printf("Press 4 for division:(a/b)\n");
printf("Please Enter Operation in Accordance\n");
scanf("%d",&s);
printf("Please Enter the first number a\n");
scanf("%d",&a);
printf("Please Enter the second number b\n");
scanf("%d",&b);
switch(s)
{
case 1:
{
addi();
break;
}
case 2:
{
sub();
break;
}
case 3:
{
multi();
break;
}
case 4:
{
div();
break;

}
}
return 0;
}

void addi(){
c=a+b;
printf("Addition is:%d\n",c);
}
void sub(){
c=a-b;
printf("Substraction is:%d\n",c);
}
void multi(){
c=a*b;
printf("Multiplication is:%d\n",c);
}
void div(){
if(b!=0){
c=a/b;
printf("Divison is:%d\n",c);
}
else{
printf("Cannot divide by zero\n");
}
}