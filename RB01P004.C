/*WAP to print the temprature in centigrade
  Author: Hardik sharma  Roll NO. 19301  Date: 10-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     float fahrenheit,centigrade;
     clrscr();
     printf("Enter the temprature in Fahrenheit :");
     scanf("%f",&fahrenheit);
     //Formula for converting fahrenheit into centigrade
     centigrade=(fahrenheit-32)*5.00/9.00;
     printf("Temprature in centigrade = %f",centigrade);
     getch();
  }


