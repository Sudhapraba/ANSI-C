#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the values of a,b and c:\n");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("A is bigger");
else if(b>c)
printf("B is bigger");
else
printf("C is bigger");
getch();
}