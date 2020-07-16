#include<stdio.h>
#include<conio.h>
void main()
{
int row,i,j,space,coef=1;
clrscr();
printf("Enter the number of rows to print the pascal traingle:\n");
scanf("%d",&row);
for(i=0;i<row;i++)
{
for(space=1;space<=row-i;space++)
{
printf(" ");
}
for(j=0;j<=i;j++)
{
if(j==0||i==0)
coef=1;
else
coef=coef*(i-j+1)/j;
printf("%3d",coef);
}
printf("\n");
}
getch();
}