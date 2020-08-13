#include<stdio.h>
#include<conio.h>
void main()
{
  int len=0,i;
  char str[30];
  clrscr();
  printf("Enter the string: ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    len++;
  }
  printf("string length= %d",len);
  getch();
}