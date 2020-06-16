#include<stdio.h>
#include<conio.h>
void main()
{
float x1,x2,x3,y1,y2,y3,m,n;
clrscr();
printf("Enter the value of x1 and y1:\n");
scanf("%f%f",&x1,&y1);
printf("Enter the value of x2 and y2:\n");
scanf("%f%f%d",&x2,&y2);
printf("Enter the value of x3 and y3:\n");
scanf("%f%f%d",&x3,&y3);
m=(y2-y1)/(x2-x1);
n=(y3-y2)/(x3-x2);
if(m==n)
{ 
 printf("The given points are lie on the straight line.");
}
else
{
printf("The given points are not lie on the straight line.");
}
getch();
}

