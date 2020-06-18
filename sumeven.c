#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i=1,sum=0,num,rem;
 clrscr();
 printf("\nEnter the number of elements:\n");
 scanf("%d",&n);
 i=1;
 sum=0;
 while(i<=n)
 {
     printf("\nEnter the data %d",i);
     scanf("%d",&num);
     rem=num%2;
     if(rem==0)
     sum+=num;
     i+=1;
 }
 printf("The sum is %d",sum);
 getch();
}
