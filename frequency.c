#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float frequency,L,R,C;
  clrscr();
  printf("Enter the value of inductance: ");
  scanf("%f",&L);
  printf("Enter the value of resistance: ");
  scanf("%f",&R);
  printf("Enter the value of capacitance: ");
  scanf("%f",&C);
  for(C=0.01;C<=0.1;C+=0.01)
  {
    frequency=sqrt(1/(L*C)-(R*R)/(4*C*C));
  printf("\n Variation of the frequency: %0.2f ",frequency);
  }
  
  getch();
}