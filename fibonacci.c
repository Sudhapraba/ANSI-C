#include<stdio.h>
#include<conio.h>
void main()
{
int f1,f2,f3,i,n;
clrscr();
f1=-1;
f2=1;
printf("Enter the number\n");
scanf("%d",&n);
printf("The fibonacci series is\n");
for(i=1;i<=n;i++)
{
f3=f1+f2;
f1=f2;
f2=f3;
printf("%d\n",f3);
}
getch();
}
