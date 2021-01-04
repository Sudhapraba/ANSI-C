#include<stdio.h>
#include<conio.h> 
void main()
{
  int i,j,n,temp,a[30];
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  printf("Enter the elements one by one:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  j=i;
  while(a[j]<a[j-1]&&j>0)
  {
    temp=a[j];
    a[j]=a[j-1];
    a[j-1]=temp;
    j--;
   }
  }
  printf("Sorted elements:\n");
  for(i=0;i<n;i++)
  {
  printf("%d\n",a[i]);
  }
  getch();
}