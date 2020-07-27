#include <stdio.h>
#include <stdlib.h>
int bill_calc();
int main()
{
    int unit=0;
    printf("Enter the total amount of units consumed\n");
    scanf("%d",&unit);
    bill_calc(unit);
    return 0;
}
int bill_calc(int unit){
    double amt;
    if((unit<=50)&&(unit>150))
    {
        amt=unit*1.50;
    }
    else if((unit<=150)&&(unit>250))
    {
        amt=((50*1.5)+(unit-50)*2.00);
    }
    else if((unit<=250)){
        amt=(50*1.5)+((150-50)*2.00)+(unit-150)*3.00;
    }
    else{
        amt=(50*1.5)+((150-50)*2.00)+((250-150)*3.00)+(unit-250)*4;
    }
    printf("Electricity bill = Rs. %.2f",amt);
}