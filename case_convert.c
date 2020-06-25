#include<stdio.h>
#include<conio.h>
void main()
{
char alphabet;
printf("Enter an alphabet:\n");
alphabet=getchar();
if(isalpha(alphabet))
{
if(isupper(alphabet))
putchar(tolower(alphabet));
else
putchar(toupper(alphabet));
}
else
printf("pls enter an alphabet...\n");
getch();
}