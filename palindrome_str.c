#include<stdio.h>
#include<conio.h>
#include<string.h>
vod main()
{
int a,i,n=0;
char s[25];
clrscr();
printf("Enter the string:");
gets(s);
n=strlen(s);
for(i=0;i<n/2;i++)
{
if(s[i]==s[n-i-1])
a++;
}
if(a==i)
printf("Is a palindrome");
else
printf("Is not a palindrome");
getch();
}