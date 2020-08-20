#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,space=0;
  char str[100];
  printf("Enter the string:");
  gets(str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    if(str[i]==' ')
    space++;
  }
  printf("Number of White spaces in the string=%d",space);
  getch();
}