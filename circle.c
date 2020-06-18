#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PIE 3.14
void main()
{
int x1,x2,y1,y2;
float rad,circum,area;
printf("Enter the value of x1 and y1:\n");
scanf("%d %d",&x1,&y1);
printf("Enter the value of x2 and y2:\n");
scanf("%d %d",&x2,&y2);
rad=sqrt((x1-x2)*(x1-x2)+(y1+y2)*(y1+y2));
circum=2*PIE*rad;
area=PIE*rad*rad;
printf("Circumference=%6.2f\n Area=%6.2f\n",circum,area);
getch();
}