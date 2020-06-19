#include<stdio.h>
#include<conio.h>
int fact (int);
int main()
{
int i,a;
printf("Enter the number:\n");
scanf("%d",&i);
a=fact(i);
printf("%d",a);
return 0;
}
int fact(int n)
{
int f;
if(n==0)
return 1;
else
f=n*fact(n-1);
}

