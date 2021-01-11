#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() 
{
 //1^2-2^2+3^2-......+n^2 
 int i,num,sum=0;
 printf("Enter number:\n");
 scanf("%d",&num);
 for(i=1;i<=num;i++){
 if(i%2==0) 
 sum-=pow(i,2);
 if(i%2==1) 
 sum+=pow(i,2);
}
 printf("Sum of series\n");
 for(i=1;i<=num;i++) {
 if(i!=num) 
{
 if(i%2==0) 
 printf("%d^2+ ",i);
 else 
 printf("%d^2- ",i);
}
 else 
 printf("%d^2 = %d\n",i,sum);
}
getch();
}


