#include<stdio.h>
#include<conio.h>
int sum(int n);
int add=0;
void main()
{
 int n;
 printf("Enter the divisable value: ");
 scanf("%d",&n);
 sum(n);
 printf("\nSum=%d",add);
 getch();
}
int sum(int n)
{
  int i;
  for(i=100;i<=200;i++)
  {
    if(i%n==0)
    {
    add+=i;
    }
  }
}