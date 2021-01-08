#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int i,n,a[30];
  float sum=0,varsum=0,differ,SD,mean,variance;
  clrscr();
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  mean=(float)sum/n;
  for(i=0;i<n;i++)
  {
  differ=a[i]-mean;
  varsum+=pow(differ,2);
  }
  variance=(float)varsum/n;
  SD=sqrt(variance);
  printf("\nMean=%.2f", mean);
  printf("\nVariance=%.2f", variance);
  printf("\nStandard deviation=%.2f",SD);
  getch();
}