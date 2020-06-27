#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float EOQ,TBO,demand_rate,setup_cost,hold_cost;
clrscr();
printf("\nDemand rate=");
scanf("%f",&demand_rate);
printf("\nSetup cost=");
scanf("%f",&setup_cost);
printf("Holding cost=");
scanf("%f",hold_cost);
EOQ=sqrt((2*demand_rate*setup_cost)/hold_cost);
TBO=sqrt((2*setup_cost/demand_rate*hold_cost));
printf("Economic order quantity=%0.2f",EOQ);
prinff("Time between orders=%o.2f",TBO);
getch();
}