#include<stdio.h>
#include<conio.h>
void main()
{
  int counter,countL=0,countU=0;
  char s[30];
  clrscr();
  printf("Enter the string: ");
  gets(s);
  for(counter=0;s[counter]!=NULL;counter++)
  {
    if(s[counter]>='A' && s[counter]<='Z')
      countU++;
  else if(s[counter]>='a' && s[counter]<='z')
      countL++;
  }
  printf("\nTotal Upper case letters:%d",countU);
  printf("\nTotal Lower case letters:%d",countL);
 getch();
 }