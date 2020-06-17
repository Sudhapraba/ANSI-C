#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float P,N,R,simple,compound;
clrscr();
printf("Enter the principal amount:\n");
scanf("%f",&P);
printf("Enter the rate of interest:\n");
scanf("%f",&R);
printf("Enter the time period in years");
scanf("%f",&N);
simple=P*N*R/100;
compound=P*pow(1+R/100,N)-P;
printf("simple interest is Rs%.2f\n",simple);
printf("compound interest is Rs%.2f\n",compound);
getch();
}