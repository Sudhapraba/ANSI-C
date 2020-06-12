#include<stdio.h>
#include<conio.h>
#define PIE 3.14
void main()
{
float area,radius;
clrscr();
printf("Enter the radius of the circle:\n");
scanf("%f",&radius);
area=PIE*radius*radius;
printf("The area of the circle is:%f\n",area);
getch();
}