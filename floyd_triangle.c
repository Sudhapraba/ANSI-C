#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,b,n;
clrscr();
printf("Enter the number of rows:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
a=1,b=0;
else
b=1,a=0;
{
for(j=1;j<=i;j++)
if(j%2==0)
printf("%d",a);
else
printf("%d",b);
}
printf("\n");
}
getch();
}