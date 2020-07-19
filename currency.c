#include<stdio.h>
#include<conio.h>
void main()
{
  char choice;
  float amount;
  clrscr();
  printf("Currency conversion to INR \n");
  printf("Enter the choice to convert:\n");
  printf("A.Euro\n");
  printf("B.Dollar\n");
  printf("C.Franc\n");
  printf("D.Dirham\n");
  printf("E.Pound\n");
  choice=getchar();
  printf("Enter the amount:");
  scanf("%f",&amount);
  switch(choice)
  {
    case 'A':
      printf("Currency value in INR=%6.2f",amount*85.64);
      break;
    case 'B':
      printf("Currency value in INR=%6.2f",amount*74.97);
      break;
    case 'C':
      printf("Currency value in INR=%6.2f",amount*79.82);
      break;
    case 'D':
      printf("Currency value in INR=%6.2f",amount*20.39);
      break;
    case 'E':
      printf("Currency value in INR=%6.2f",amount*94.15);
      break;
    default:
      printf("please enter the valid choice");
      break;
   }
  getch();
}