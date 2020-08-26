#include<stdio.h>
#include<conio.h>
int GetSum(int n);
int GetRev(int sum);
void main()

{
  int n,sum,rev;
  clrscr();
  printf("Enter the number to check whether is a magic or not:");
  scanf("%d",&n);
  sum=GetSum(n);
  rev=GetRev(sum);
  if(sum*rev==n)
  printf("The given number is a magic");
  else
  printf("The given number is not a magic");
  getch();
}
int GetSum(int n)
{
  int sum=0,x;
  while(n>0)
  {
  
  x=n%10;
  sum=sum+x;
  n=n/10;
  }
  return sum;
}
int GetRev(int n)
{
  int rev=0,x;
  while(n>0)
  {
  
  x=n%10;
  rev=rev*10+x;
  n=n/10;
  }
  return rev;
}