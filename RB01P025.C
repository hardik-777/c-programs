/*WAP to calculate the overtime pay of employees
  Author: Hardik sharma  Roll No. 19301  Date: 15-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int working_hour,pay,over_time,count=1;
     clrscr();
     while(count<=3)
	{
	   printf("\nEnter the working hour");
	   scanf("%d",&working_hour);
	   if(working_hour>40)
	      {
		 over_time=working_hour-40;
		 pay=over_time*12;
		 printf("\nOvertime pay of an employee is %d :",pay);
	      }
	   else
	      {
		 printf("No Overpay");
	      }
	   count++;
	}
     getch();
  }
