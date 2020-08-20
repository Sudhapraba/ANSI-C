#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i ,count=0;
  char c,str[30];
  printf("Enter the string:");
  gets(str);
  printf("Enter the character:");
  c=getchar();
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    if(str[i]==c)
    count++;
  }
  printf("Repeatance of the character= %d",count);
  getch();
}