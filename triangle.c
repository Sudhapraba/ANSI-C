#include<stdio.h>
#include<conio.h>
void main()
{
int side1,side2,side3;
clrscr();
printf("Enter the three sides of a triangle:\n");
scanf("%d %d %d",&side1,&side2,&side3);
if(side1==side2 && side2==side3)
printf("The triangle is an equilateral\n");
else if(side1==side2||side2==side3||side3==side1)
printf("The triangle is a isosceles\n");
else
printf("The triangle is a scalene\n");
getch();
}