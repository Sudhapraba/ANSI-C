#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,count=0;
char c,str[100];
printf("Enter a sentence\n");
gets(str);
printf("Enter a character to know it's repetance in sentence\n");
scanf("%c",&c);
for(i=0;i<strlen(str);i++)
{
 if(str[i]==c) 
{
 count++;
}
}
printf("Letter %c repeated %d times\n",c,count);
getch();
}


