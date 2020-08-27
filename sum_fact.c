#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
  int n;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Sum=%d", factorial(n));
  getch();
}
int factorial(int n)
{
  int i,j,sum=0,fact=0;
  for(i=1;i<=n;i++)
  {
  fact=1;
  if(i!=n)
  printf("%d!+ ",i);
  else
  printf("%d!",i);
  for(j=1;j<=i;j++)
  fact=fact*j;
  sum=sum+fact;
  }
  return sum;
}