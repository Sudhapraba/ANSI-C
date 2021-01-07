#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,k=1;
 char c='A';
 clrscr();
 printf("Enter the number of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=i;j++)
   {
     if(i%2==0)
     printf("%c ",c++);
     else
     printf("%d ",k++);
   }
   printf("\n");
 }
 getch();
}