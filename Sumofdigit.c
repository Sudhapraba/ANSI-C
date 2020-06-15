#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,n;
clrscr();
printf("Enter the three digit number:\n");
scanf("%d",&n);
a=n/100;
b=(n%100)/10;
c=n%10;
d=a+b+c;
printf(" First number=%4d\n Second number=%3d\n Third number=%4d\n",a,b,c);
printf("Sum of the given digit is:%2d",d);
getch();
}