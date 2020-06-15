#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter the number:\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
 for(j=2;j<i;j++)
 {
 if((i%j)==0)break;
 }
if(j==i)
printf("Prime numbers: %d\n",i);
}
getch();
}
 