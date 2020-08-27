#include<stdio.h>
#include<conio.h>
#include<math.h>
int add(int n);
void main()
{
  int n;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&n);
  printf("\nsum=%d",add(n));
  getch();
}
int add(int n)
{
int i,sum=0;
for(i=1;i<=n;i++)
{
  if(i!=n)
  printf("%d^2+ ",i);
  else
  printf("%d^2 ",i);
  sum+=pow(i,2);
}
  return sum;
}
