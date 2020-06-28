#include<stdio.h>
#include<conio.h>
#define RICE 54
#define SUGAR 40
void main()
{
int rice,sugar;
clrscr();
printf("1kg of Rice=54");
printf("1kg of Sugar=40");
printf("Enter the quantity of rice you want:");
scanf("%d",&rice);
printf("Enter the quantity of sugar you want:");
scanf("%d",&sugar);
printf("Total amount...");
printf("Rice=%d\n Sugar=%d\n",RICE*rice,SUGAR*sugar);
printf("Total payment=%d",RICE*rice+SUGAR*sugar);
getch();
}