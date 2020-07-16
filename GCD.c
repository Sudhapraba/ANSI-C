#include<stdio.h>
#include<conio.h>
#include<math.h>
int GCD(int m,int n);
void main()
{
int n1,n2;
clrscr();
printf("Enter the value of n1 & n2:\n");
scanf("%d %d",&n1,&n2);
printf("GCD of %d and %d is %d",n1,n2,GCD(n1,n2));
getch();
}
int GCD(int a,int b)
{
if(b>a)
return GCD(b,a);
if(b==0)
return a;
else
return GCD(b,a%b);
}