#include<stdio.h>
#include<conio.h>
void main() 
{
   int i,space,n,k=0,count=0,count1=0;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i=1; i<=n; i++)
   {
      for (space=1;space<=n-i;space++) 
      {
         printf("  ");
         count++;
      }
      while (k!=2*i-1) 
       {
         if (count<=n-1) 
         {
            printf("%d ",i+k);
            count++;
         } 
         else 
         {
            count1++;
            printf("%d ",(i+k-2*count1));
         }
         k++;
       }
      count1=count=k=0;
      printf("\n");
   }
   getch();
}