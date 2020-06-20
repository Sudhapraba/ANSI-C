#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char character;
clrscr();
printf("Enter the input:\n");
character=getchar();
if(isalpha(character)>0)
printf("The input is a letter\n");
else if(isdigit(character)>0)
printf("The input is a digit\n");
else
printf("The input is not a alphanumeric\n");
getch();
}
