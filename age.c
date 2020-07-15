#include<stdio.h>
#include<conio.h>
int cal_date,cal_month,cal_year;
void year(int c_date,int c_month,int c_year,int b_date,int b_month,int b_year)
{
  int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
  if(b_date>c_date)
  {
    c_date+=month[b_month-1];
    c_month-=1;
  }
  if(b_month>c_month)
  {
    c_year-=1;
    c_month+=12;
  }
  cal_date=c_date-b_date;
  cal_month=c_month-b_month;
  cal_year=c_year-b_year;
  printf("present age\n %d years %d months %d days",cal_year,cal_month,cal_date);
}
int main()
{
  int c_date=15;
  int c_month=7;
  int c_year=2020;
  int b_date=4;
  int b_month=7;
  int b_year=2001;
  year(c_date,c_month,c_year,b_date,b_month,b_year);
}