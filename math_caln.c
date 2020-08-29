#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
  int n,r,choice;
  float p,c;
  clrscr();
  printf("1.Permutation calculation\n");
  printf("2.Combination calculation\n");
  printf("Enter the choice:");
  scanf("%d",&choice);
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  printf("Enter the value of r:\n");
  scanf("%d",&r);
  if(n>=0&&n>=0&&n>=r)
  {
  switch(choice)
  {
    case 1:
      p=fact(n)/fact(n-r);
      printf("%dP%d=%f",n,r,p);
      break;
    case 2:
      c=fact(n)/(fact(n-r)*fact(r));
      printf("%dC%d=%f",n,r,c);
      break;
    default:
      printf("Invalid choice");
      break;
  }
  }
  else
  {
  printf("invalid input");
  }
  getch();
}
int fact(int n)
{
 if(n==0)
 return 1;
 else
 return n*fact(n-1);
}
