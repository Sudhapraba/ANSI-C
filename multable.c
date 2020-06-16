#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r=1;
printf("Enter the multiplication table and number of times\n");
scanf("%d%d",&i,&j);
printf("The multiplication table is...\n");
do
(
printf("%d * %d = %d\n",r,i,r*i);
r=r+1;
}
while(r<j);
}
getch();
}