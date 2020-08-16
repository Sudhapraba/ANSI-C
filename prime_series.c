#include<stdio.h>
#include<conio.h>
main()
{
  int n,i,j,count=0;
  printf("Enter a number \n");
  scanf("%d",&n);
  printf("The Prime numbers upto %d are\n",n);
  for(i=1;i<=n;i++)
  {
    count=0;
    for(j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        count++;
      }
    }
    if(count==2)
    {
      printf("%d\n",i);
    }
  }
}