#include<stdio.h>
#include<conio.h>
void main()
{
 char str[]="123456789";
 int i,j,k,l;
 clrscr();
 for(i=0;i<5;i++)
 {
   for(k=4;k>i;k--)
   {
     printf(" ");
   }
   for(j=0,l=i;j<=i;j++,l++)
   {
     printf("%c",str[l]);
   }
   l=l-2;
   for(k=0;k<i;k++,l--)
   printf("%c",str[l]);
   printf("\n");
 }
 getch();
}