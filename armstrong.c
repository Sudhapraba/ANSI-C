#include<stdio.h>
#include<conio.h>
void main()
{
int rem,num,x,sum=0;
clrscr();
printf("Enter the number:\n");
scanf("%d",&num);
x=num;
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(x==sum)
printf("The given number is an armstrong.");
else
printf("The given number is not an armstrong");
getch();
}