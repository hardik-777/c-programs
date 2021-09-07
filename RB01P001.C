/* WAP to calculate gross salary of employee
   Author : Hardik Sharma   Roll no. 19301  Date=10-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int basic_salary;
     float house_rent_all,dearness_all,gross_salary;
     clrscr();
     printf("Enter the basic salary :");
     scanf("%d",&basic_salary);
     //formula for house rent allowence
     house_rent_all=(basic_salary*40.00)/100.00;
     printf("\nHouse rent allowence = %f",house_rent_all);
     //formla for dearness allowence
     dearness_all=basic_salary*20.00/100.00;
     printf("\nDearness allowence = %f",dearness_all);

     gross_salary=basic_salary+house_rent_all+dearness_all;
     printf("\nThe gross salary is = %f",gross_salary);
     getch();
  }