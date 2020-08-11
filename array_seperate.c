#include<stdio.h>
#include<conio.h>
void main()
{
  int a[25],i,size;
  clrscr();
  printf("Enter the size of array: ");
  scanf("%d",&size);
  printf("Enter the array elements: ");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Even numbers in arrays: ");
  for(i=0;i<size;i++)
  {
    if(a[i]%2==0)
    {
      printf("%d\n",a[i]);
    }
  }
  printf("Odd numbers in arrays: ");
  for(i=0;i<size;i++)
  {
    if(a[i]%2==1)
    {
      printf("%d\n",a[i]);
    }
  }
  getch();
 }
    