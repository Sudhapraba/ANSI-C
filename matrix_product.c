#include<stdio.h>
#include<conio.h>
void main()
{
  int a1[10][10],a2[10][10],s[10][10],i,j,k,r1,r2,c1,c2;
  clrscr();
  printf("Enter the number of rows and columns in first matrix:\n");
  scanf("%d %d",&r1,&c1);
  printf("Enter the number of rows and columns in second matrix:\n");
  scanf("%d %d",&r2,&c2);
  if(c1==r2)
  {
  printf("Enter the elements of first matrix:\n");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      scanf("%d",&a1[i][j]);
    }
  }
  printf("Enter the elements of second matrix:\n");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      scanf("%d",&a2[i][j]);
    }
  }
    for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
      s[i][j]=0;
      for(k=0;k<c1;k++)
      {
      s[i][j]+=a1[i][k]*a2[k][j];
      }
    }
    printf("\n");
  }
  printf("Multiplication of two matrices:\n");
  {
    for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
      printf("%d\n",s[i][j]);
    }
  }
  }
  }
  else
  {
  printf("Multiplication of matrix is not possible");
  }
  getch();
}