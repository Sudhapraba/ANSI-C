#include<stdio.h>
#include<conio.h>
void main()
{
 char str[25],*r;
 int len=0;
 clrscr();
 printf("Enter a string:\n");
 gets(str);
 r=str;
 while(*r!='\0') 
{
 len++;
 r++;
}
 printf("Length of string is %d\n",len);
 getch();
}
 


 

