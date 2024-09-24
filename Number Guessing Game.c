#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
int number,guess,n=1;
srand(time(0));
number=rand()%100+1;
printf("Guess the Random Number Between 1 to 100\n");
do
{
scanf("%d",&guess);
if(guess>number){
printf("Please Enter a Lower Number\n");
}
else if(guess<number){
printf("Please Enter a Higher Number\n");
}
else{
printf("You Have Guessed The Number in %d Attempts\n",n);
}
n++;
}
while(number!=guess);

return 0;
}
    