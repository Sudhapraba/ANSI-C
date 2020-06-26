#include<stdio.h>
#include<conio.h>
void main()
{
float pur_price,dep,sal_value;
int years;
printf("Enter the  purchase price:\n");
scanf("%f",&pur_price);
printf("Enter the  depreciation value:\n");
scanf("%f",&dep);
printf("Enter the year of services:\n")
scanf("%d",&years);
sal_value=pur_price-(years*dep);
printf("Salvage value=%f",sal_value);
getch();
}