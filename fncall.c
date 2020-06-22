#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
void main()
{
int a,b,c,d,e,f;
clrscr();
printf("Enter the values of a and b:\n");
scanf("%d %d",&a,&b);
c=add(a,b);
d=sub(a,b);
e=mul(a,b);
f=div(a,b);
printf("Addition=%d\n Subtraction=%d\n Multiplication=%d\n Division=%d\n",c,d,e,f);
getch();
}
int add(int a,int b)
{
return(a+b);
}
int sub(int a,int b)
{
return(a-b);
}
int mul(int a,int b)
{
return(a*b);
}
int div(int a,int b)
{
return(a/b);
}