#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Book 
{
  int id,price;
  char name[30],author[30];
};
void main()
{
struct Book b[3];
int i;
for(i=0;i<3;i++)
{
printf("Enter the book %d id:",i+1);
scanf("%d",&b[i].id);
printf("Enter the book %d name:",i+1);
scanf("%s",b[i].name);
printf("Enter the book %d price:",i+1);
scanf("%d",&b[i].price);
printf("Enter the book %d author name:",i+1);
scanf("%s",b[i].author);
}
printf("Book Details");
for(i=0;i<3;i++)
{
printf("\nBook %d id=%d ",i+1,b[i].id);
printf("\nBook %d name=%s",i+1,b[i].name);
printf("\nBook %d price=%d",i+1,b[i].price);
printf("\nAuthor name of the book %d=%s",i+1,b[i].author);
}
getch();
}