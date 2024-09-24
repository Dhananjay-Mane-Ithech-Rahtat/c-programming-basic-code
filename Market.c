#include<stdio.h>

int main()

{
int a,b,c,d,e,s;

printf("Available Supplies:\n");
printf("Notebook,Price=50₹\n");
printf("Pencil,Price=6₹\n");
printf("Pen,Price=10₹\n");
printf("Eraser,Price=3₹\n");
printf("Scale,Price=7₹\n");
printf("Enter The Number Of Notebooks\n");
scanf("%d",&a);
printf("Enter The Number Of Pencils\n");
scanf("%d",&b );
printf("Enter The Number Of Pen\n");
scanf("%d",&c);
printf("Enter The Number Of Eraser\n");
scanf("%d",&d);
printf("Enter The Number Of Scale\n");
scanf("%d",&e);

s=a*50+b*6+c*10+d*3+e*7;
printf("\nThe Total Amount To be Paid Is:\n");
printf("%d",s);

return 0;

}