#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],f[100];
int count,i,j,size;
clrscr();
printf("Enter the size of array:\n");
scanf("%d",&size);
printf("Enter the array elements one by one:\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
f[i]=-1;
}
for(i=0;i<size;i++)
{
count=1;
for(j=i+1;j<size;j++)
{
if(a[i]==a[j])
{
count++;
f[j]=0;
}
}
if(f[i]!=0)
{
f[i]=count;
}
}
printf("frequency\n");
for(i=0;i<size;i++)
{
if(f[i]!=0)
{
printf("%d occurs %d times\n",a[i],f[i]);
}
}
getch();
}