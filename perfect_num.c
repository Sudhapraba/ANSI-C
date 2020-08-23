#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int i,j,n,sum;
  clrscr();
  printf("Enter the maximum limit: ");
  scanf("%d",&n);
  printf("Perfect number between 1 and %d are\n",n);
  for(i=1;i<=n;i++)
  {
    sum=0;
    for(j=1;j<i;j++)
    {
      if(i%j==0)
      {
      sum+=j;
      }
    }
  if(sum==i)
  {
  printf("%d\n",i);
  }
  }
  getch();
}