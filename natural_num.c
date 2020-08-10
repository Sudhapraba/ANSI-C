#include<stdio.h>
#include<conio.h>
int add(int n);
void main()
{
  int ans,num;
  printf("Enter the number: ");
  scanf("%d",&num);
  ans=add(num);
  printf("sum=%d",ans);
  getch();
}
int add(int n)
{
  if (n!=0)
  return n + add(n-1);
  else
  return n;
}