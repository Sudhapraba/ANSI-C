#include<stdio.h>
#include<conio.h>
void main()
{
char str[25];
int vow=0,con=0,i=0;
clrscr();
printf("Enter a string:\n");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
vow++;
else
con++;
i++;
}
printf("Number of vowels=%d\n",vow);
printf("Number of consonants=%d",con);
getch();
}