#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0,j=0,n,temp,a[50];
  clrscr();
  printf("Enter the number of elements to perform bubble sort:\n");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n-1-i;j++)
   {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
   }
  }
  printf("After Sorting the elements\n");
  for(i=0;i<n;i++)
  {
  printf("%d\n",a[i]);
  }
  getch();
}
