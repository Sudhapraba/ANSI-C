#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,ar[50];
  clrscr();
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
  scanf("%d",&ar[i]);
  }
  for(i=1;i<n;i++)
  {
  if(ar[0]<ar[i])
  {
  ar[0]=ar[i];
  }
  }
  printf("The largest number is:%d",ar[0]);
  getch();
}
