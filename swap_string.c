#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i;
  char s1[30],s2[30],temp[30];
  clrscr();
  printf("Enter the first string:");
  gets(s1);
  printf("Enter the second string:");
  gets(s2);
  for(i=0;s1[i]!='\0';i++)
  {
   temp[i]=s1[i];
  }
  temp[i]='\0';
  for(i=0;s2[i]!='\0';i++)
  {
   s1[i]=s2[i];
  }
  s1[i]='\0';
  for(i=0;temp[i]!='\0';i++)
  {
   s2[i]=temp[i];
  }
  s2[i]='\0';
  printf("After swapping the strings...");
  printf("\nstring1 = %s",s1);
  printf("\nstring2 = %s",s2);
  getch();
}