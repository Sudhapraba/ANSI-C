#include<stdio.h>
#include<conio.h>
int fact (int);
void main()
{
int i,a;
printf("Enter the number:\n");
scanf("%d",&i);
a=fact(i);
printf("%d",a);
getch();
}
int fact(int n)
{
if(n==0)
return 1;
else
return(n*fact(n-1));
}

