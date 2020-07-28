#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int interval,counter,time;
float acc, dis=0, vel;
clrscr();
printf("To calculate the total distance travelled by a vehicle:");
printf("\nNo of intervals: ");
scanf("%d",&interval);
for(counter = 1;counter <=interval;counter++)
{
printf("\n AT T%d TIME(sec) : ",counter);
scanf("%d",&time);
printf("\tVELOCITY AT %d sec (m/sec) : ",time);
scanf("%f",&vel);
printf("\tACCLERATION AT %d sec (m/sec^2): ",time);
scanf("%f",&acc);
dis+= (vel*time + (acc*pow(time,2))/2);
}
printf("\nTotal distance travelled by a vehicle in %d interval of time : %f",interval,dis);
getch();
}
