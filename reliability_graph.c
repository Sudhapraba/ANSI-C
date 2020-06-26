#include<stdio.h>
#include<conio.h>
#include<math.h>
#define LAMBDA 0.001
void main()
{
int i,R;
float r;
double t;
clrscr();
for(i=1;i<=27;++i)
{
printf("---------");
}
printf("\n");
for(t=0;t<=3000;t+=150)
{
r=exp(-LAMBDA*t)
R=(int)(50*r+0.5);
printf("|");
for(i=1;i<=R;++i)
{
printf("*");
}
printf("#\n");
}
for(i=1;i<3;++i)
{
printf("|\n");
}
getch();
}