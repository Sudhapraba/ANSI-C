#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("Enter the values for a and b:");
scanf("%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("After swapping a and b using third variable:%d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping a and b without using third variable:%d %d",a,b");
getch();
}