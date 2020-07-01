#include<stdio.h>
#include<conio.h>
void main()
{
int n,num=0;
clrscr();
printf("Enter the number without zero to convert word:\n");
scanf("%d",&n);
while(n!=0)
{
num=(num*10)+(n%10);
n/=10;
}
while(num!=0)
{
switch(num%10)
{
case 0:
printf("Zero\t");
break;
case 1:
printf("One\t");
break;
case 2:
printf("Two\n");
break;
case 3:
printf("Three\n");
break;
case 4:
printf("Four\n");
break;
case 5:
printf("Five\t");
break;
case 6:
printf("Six\t");
break;
case 7:
printf("Seven\t");
break;
case 8:
printf("Eight\t");
break;
case 9:
printf("Nine\t");
break;
}
num=num/10;
}
getch();
}