#include<stdio.h>
#include<conio.h>
void main()
{
int row,i,j;
clrscr();
printf("Enter the number of rows:\n");
scanf("%d",&row);
for(i=row;i>=1;--i)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
getch();
}