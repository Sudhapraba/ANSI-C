#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("Enter the value:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 for(j=i;j<=n;j++)
 {
 printf("%d",j);
 }
printf("\n");
}
getch();
}