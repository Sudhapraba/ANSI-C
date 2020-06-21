#include<stdio.h>
#include<conio.h>
#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02
void main()
{
int quantity;
float gross_salary,price;
float bonus,commission;
clrscr();
printf("Input number sold and price:\n");
scanf("%d %f",&quantity,&price);
bonus=BONUS_RATE*quantity;
commission=COMMISSION*quantity*price;
gross_salary=BASE_SALARY+bonus+commission;
printf("\n");
printf("Bonus        =%.2f\n",bonus);
printf("commission   =%.2f\n",commission);
printf("Gross salary =%.2f\n",gross_salary);
getch();
}