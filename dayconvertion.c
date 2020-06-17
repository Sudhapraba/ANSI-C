#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,mon,day;
printf("Give the days:\n");
scanf("%d",&n);
mon=n/30;
day=n%30;
printf("%d Month\t %dDays",mon,day);
getch();
}