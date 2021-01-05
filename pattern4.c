#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,num,k,count=0;
 printf("Enter number of rows\n");
 scanf("%d",&num);
 for(i=num;i>=1;i--) 
{
 for(k=1;k<=count;k++) 
{
 printf(" ");
}
 for(j=i;j>=1;j--) 
{
 printf("%d",j);
 
}
 printf("\n");
 count++;
}
getch();
}
 

