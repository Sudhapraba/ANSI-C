#include<stdio.h>
#include<conio.h>
void main()
{
  float m,cm,km;
  int choice;
  clrscr();
  printf("Enter the choice to convert\n");
  printf("1.meter to centimetre\n");
  printf("2.centimetre to meter\n");
  printf("3.meter to kilometre\n");
  printf("4.kilometer to metre\n");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
    printf("Enter the length in metres:");
    scanf("%f",&m);
    printf("%.3f m=%.2f cm",m,m*100);
    break;
  case 2:
    printf("Enter the length in centimetres:");
    scanf("%f",&cm);
    printf("%.3f cm=%.2f m",cm,cm*0.01);
    break;
  case 3:
    printf("Enter the length in metres:");
    scanf("%f",&m);
    printf("%.3f m=%.2f km",m,m*0.001);
    break;
  case 4:
    printf("Enter the length in kilometres:");
    scanf("%f",&km);
    printf("%.3f km=%.2f m",km,km*1000);
    break;
  default:
    printf("invalid choice!");
    break;
    }
    getch();
}
