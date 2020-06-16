#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d;
double root1,root2;
clrscr();
printf("Enter the values of a,b and c\n");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
{
printf("Roots are real and equal\n");
root1=-b/(double)(2*a);
root2=root1;
printf("First root=%.3f\n",root1);
printf("Second root=%.3f\n",root2);
}
else if(d>0)
{
printf("Roots and real and unequal");
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("First root=%.3f\n",root1);
printf("Second root=%.3f\n",root2);
}
else
{
printf("Roots are imaginary\n");
root1=-b/(double)(2*a);
root2=sqrt(-d)/(2*a);
printf("First root=%.3f+i%.3f\n",root1,root2);
printf("Second root=%.3f-i%.3f\n",root1,root2);
}
getch();
}