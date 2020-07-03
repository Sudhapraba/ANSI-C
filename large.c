#include<stdio.h>
#include<conio.h>
int maxi(int,int,int);
void main()
{
int max;
clrscr();
max=maxi(10,20,30);
printf("Largest number %d\n",max);
getch();
}
int maxi(int a,int b,int c)
{
int max=a;
(max<b)&&(max=b);
(max<c)&&(max=c);
return max;
}