#include<stdio.h>
#include<conio.h>
void main()
{
int row,col,n;
clrscr();
printf("Enter the numbers of rows:\n");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
 for(col=1;col<=row;col++)
 {
 printf("*");
 }
printf("\n"); 
}
getch();
}