#include<stdio.h>
#include<conio.h>
void main()
{
int n,ans;
clrscr();
printf("2+4+6+....+n");
printf("Enter the n value:\n");
scanf("%d",&n);
n=n/2;
ans=2*(n*(n+1)/2);
printf("sum of series=%d",ans);
getch();
}