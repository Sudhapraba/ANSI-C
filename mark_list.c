#include<stdio.h>
#include<conio.h>
#define FIRST 400
#define SECOND 250
void main()
{
int m,n,i,j,roll_number,marks,total;
clrscr();
printf("Enter number of students and subjects\n");
scanf("%d %d",&n,&m);
for(i=1;i<=n;++i)
{
printf("Enter roll_number:");
scanf("%d",&roll_number);
total=0;
printf("\nEnter of %d subjects for ROLL NUM %d\n",m,roll_number);
for(j=1;j<=m;j++)
{
scanf("%d",&marks);
total=total+marks;
}
printf("Total marks=%d",total);
if(total>=FIRST)
printf("(First division)");
else if(total>=SECOND)
printf("{Second division}");
else
printf("(fail)");
}
getch();
}