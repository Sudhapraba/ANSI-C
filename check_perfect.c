#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int i,num,sum=0;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&num);
  for(i=1;i<num;i++)
  {
    if(num%i==0)
    {
      sum+=i;
    }
  }
    if(sum==num)
    {
    printf("Perfect number");
    }
    else
    {
    printf("Not a perfect number");
    }
  getch();
}