#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,k=1;
  clrscr();
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  for(i=1;i<=n*2;i+=2)
  {
    if(k%2==1)
    {
      printf("%3d %3d",i,i+1);
      k++;
    }
    else
    {
       printf("%3d %3d",i+1,i);
       k++;
    }
    printf("\n");
  }
  getch();
}