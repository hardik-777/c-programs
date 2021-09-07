/*Program to accept the number of days the member is late return the book and
 display the fine or the appropriate message
 Author:Hardik Sharma  Roll No. 19301  Date: 12-07-2021*/
#include<stdio.h>
#include<conio.h>
int main()
  {
     int days;
     double fine;
     clrscr();
     printf("Enter the number of days,book returned late : ");
     scanf("%d",&days);
     if(days<=5)
	{
	   fine=days*0.50;
	   printf("Fine= %.2f\nYou have to pay %.2f rupees fine.",fine,fine);
	}
     else
	{
	   if(days<=10)
	      {
		 fine=2.5+(days-5)*1;
		 printf("Fine= %.2f\nYou have to pay %.2f rupees fine.",fine,fine);
	      }
	   else
	      {
		 if(days<=30)
		    {
		       fine=(days-10)*5+7.5;
		       printf("Fine= %.2f\nYou have to pay %.2f rupees fine.",fine,fine);
		    }
		 else
		    {
		       printf("Your membership will be cancelled.");
		    }
	      }
	}
     getch();
  }