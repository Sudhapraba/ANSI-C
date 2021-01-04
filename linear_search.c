#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,search,flag=0,a[50];
  clrscr();
  printf("Enter the size of array:\n");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched:\n");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
    if(a[i]==search)
    {
      flag=1;
    }
  }
   if(flag==1)
    {
    printf("Search element found in position=%d",i);
    }
    else
    {
    printf("Search unsuccessful");
    }
getch();
}