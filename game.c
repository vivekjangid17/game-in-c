#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
int number,guess,nguess;
srand(time(0));
number=rand()%100+1;
printf("the random number is %d\n",number);
do
{
printf("guess a number:\n");
scanf("%d",&guess);
if(guess>number)
{
printf("lower number please\n");
}
else if(guess<number)
{
printf("higher number please\n");
}
else
{
printf("You guessed in %d attempts",nguess);
}
nguess++;
}

while(guess!=number);


getch();
}