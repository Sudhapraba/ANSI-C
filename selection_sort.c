#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,pointer,n,temp,a[50];
  clrscr();
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    pointer=i;
    for(j=i+1;j<n;j++)
    {
    if(a[pointer]>a[j])
    pointer=j;
    if(pointer!=i)
    {
      temp=a[pointer];
      a[pointer]=a[i];
      a[i]=temp;
    }
    }
  }
  printf("Sorted elements:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  getch();
}