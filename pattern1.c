#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k=1,n;
  clrscr();
  printf("Enter the number of rows: \n");
  scanf("%d",&n);
  printf("Alphabetical order: \n");
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%3c",(char)(k+64));   //4 spaces
        }
        printf("\n");
    }
   getch();
}