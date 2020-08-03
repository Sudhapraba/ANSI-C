#include<stdio.h>
#include<conio.h>
void main() 
{
    int n, i,fact = 1;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Negative number doesn't exist.");
    else 
    {
        for (i = 1; i <= n; ++i)
         {
            fact *= i;
         }
        printf("Factorial of %d = %llu", n, fact);
    }
getch();
}