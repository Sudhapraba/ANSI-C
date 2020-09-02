#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char string[20][20],dummy[20];
  int i,j,n;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%s",string[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(string[i],string[j])>0)
      {
      strcpy(dummy,string[i]);
      strcpy(string[i],string[j]);
      strcpy(string[j],dummy);
      }
    }
  }
  printf("Alphabetical order:\n");
  for(i=0;i<n;i++)
  {
   printf("%s\n",string[i]);
  }
  getch();
}

