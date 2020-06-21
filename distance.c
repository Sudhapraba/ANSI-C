#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x1,x2,y1,y2;
float D;
clrscr();
printf("Enter the values of x1 and y1:\n");
scanf("%d %d",&x1,&y1);
printf("Enter the values of x2 and y2:\n");
scanf("%d %d",&x2,&y2);
D=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("The distance between two points:%0.3f",D);
getch();
}
