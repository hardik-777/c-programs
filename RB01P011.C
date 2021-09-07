/*WAP to print the absolute value of the number
  Author : Hardik sharma  Roll NO. 19301  Date:12-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int absolute_number,number;
     clrscr();
     printf("Enter any number");
     scanf("%d",&number);
     if(number<0)
	{
	   absolute_number=number*(-1);
	   printf("Absolute number of %d is %d",number,absolute_number);
	}
     else
	{
	   printf("\nAbsolute Number = %d",number);
	}
     getch();
  }


