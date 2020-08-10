#include<stdio.h>
#include<conio.h>
void main()
{
  int distance;
  float fuel,mileage;
  clrscr();
  printf("Enter the distance travelled by the car in kilometres: ");
  scanf("%d",&distance);
  printf("Enter the fuel consumption in litres: ");
  scanf("%f",&fuel);
  mileage=distance/fuel;
  printf("Mileage of the car=%0.3f",mileage);
  getch();
}