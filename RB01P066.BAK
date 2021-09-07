/* Program to check the year is leap year or not by function
   Author:Hardik Roll no:-19301 Date:16-01-20*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int year,ans;
     clrscr();
     printf("Enter any year :");
     scanf("%d",&year);
     ans =leap(year);
     if(ans==1)
	{
	   printf("Leap year");
	}
     else
	{
	   printf("Not leap year");
	}
     getch();
  }
leap(int y)
  {
     if((y%4==0)&&(y%100!=0)||(y%400==0))
	{
	   return 1;
	}
     else
	{
	   return 0;
	}
  }
