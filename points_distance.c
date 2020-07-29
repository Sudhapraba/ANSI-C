#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int x1,x2,y1,y2;
  float d;
  clrscr();
  printf("Enter the values of x1 and y1:");
  scanf("%d %d",&x1,&y1);
  printf("Enter the values of x2 and y2:");
  scanf("%d %d",&x2,&y2);
  d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("Distance between the points:%0.3f",d);
  getch();
}
