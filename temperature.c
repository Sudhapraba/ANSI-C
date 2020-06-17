#include<stdio.h>
#include<conio.h>
void main()
{
flot fahr,cels;
int choice;
printf("1.fahrenheit to celsius");
printf("2.celsius to fahrenheit");
printf("Enter the choice for temperature conversion");
scanf("%d",&choice)
switch(choice)
{
case 1:
printf("Enter the temperature in fahrenheit:\n");
scanf("%f",&fahr);
cels=(fahr-32)/1.8;
printf("Temperature in celsius:%f",cels);
break;
case 2:
printf("Enter the temperature in celsius:\n");
scanf("%f",&cels);
fahr=(cels*1.8)+32;
printf("Temperature in fahrenheit:%f",fahr);
break;
default:
printf("please enter the correct option");
break;
}
getch();
}