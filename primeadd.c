#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,min,max,isprime,sum=0;
clrscr();
printf("Enter the minimum limit:\n");
scanf("%d",&min);
printf("Enter the maximum limit:\n");
scanf("%d",&max);
for(i=min;i<=max;i++)
{
isprime=1;
 for(j=2;j<=i/2;j++)
 {
 if((i%j)==0)
	 isprime=0;
 break;
 }
}
if(isprime==1)
{
	sum=+i;
printf("sum of prime numbers between %d and %d is %d",min,max,sum);
}
getch();
}