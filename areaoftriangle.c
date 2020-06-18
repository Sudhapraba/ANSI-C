#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
float s,p,area;
printf("Enter the three sides of a triangle:\n");
scanf("%d%d%d",&a,&b,&c);
p=(a+b+c);
s=p/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Perimeter of a triangle:%.3f\n",p);
printf("Semiperimter of a triangle:%.3f\n",s);
printf("Area of a triangle:%.3f",area);
getch();
}