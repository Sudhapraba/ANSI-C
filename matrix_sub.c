#include<stdio.h>
#include<conio.h>
void main()
{
  int a1[10][10],a2[10][10],s[10][10],i,j,a,b;
  clrscr();
  printf("Enter the number of rows:");
  scanf("%d",&a);
  printf("Enter the number of columns:");
  scanf("%d",&b);
  printf("Enter the elements of first matrix:\n");
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      scanf("%d",&a1[i][j]);
    }
  }
  printf("Enter the elements of second matrix:\n");
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      scanf("%d",&a2[i][j]);
    }
  }
  printf("Subtraction of two matrices:\n");
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      s[i][j]=a1[i][j]-a2[i][j];
      printf("%d \t",s[i][j]);
    }
    printf("\n");
  }
  getch();
}