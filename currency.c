#include<stdio.h>
#include<conio.h>
void main()
{
int amount,notes,i;
int R[9]={2000,500,200,100,50,20,10,5,1};
clrcsr();
printf("\nEnter the amount=");
scanf("%d",&amount);
for(i=0;i<9;i++)
{
notes=amount/R[i];
if(notes)
{
amount=amount%R[i];
printf("%d*%d=%d\n",notes,R[i],notes*R[i]);
}
}
getch();
}