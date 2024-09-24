#include<stdio.h>
int main()
{
    int x,y,z,p;
    printf("Enter The Number as per operation\n");
    printf("for addition type 1\n");
    printf("for substraction (x-y) type 2\n");
    printf("for substraction (y-x) type 3\n");
    printf("for multiplication type 4\n");
    printf("for division (x/y) type 5\n");
    printf("for division (y/x) type 6\n");
    printf("Enter The First Number 'x'\n");
    scanf("%d",&x);
    printf("Enter The Second Number 'y'\n");
    scanf("%d",&y);

    printf("\nEnter Operation Number\n");
    scanf("%d",&p);
    switch (p)
    {
        
    {
    case 1 :
    z=x+y;
    printf("Addition is %d",z);
    break;
    }
    
    {
    case 2 :
    z=x-y;
    printf("Subtraction is %d",z);
    break;
    }
    
    {
    case 3 :
    z=y-x;
    printf("Substraction is %d",z);
    break;
    }
    
    {
    case 4 :
    z=x*y;
    printf("multiplication is %d",z);
    break;
    }
    
    {
    case 5 :
    z=x/y;
    printf("divison is %d",z);
    break;
    }
    
    {
    case 6 :
    z=y/x;
    printf("divison is %d",z);
    break;
    }
    
    default:
    
   printf("Wrong option Try Again Please");
    }
    
    return 0;
    
    
    
    
}