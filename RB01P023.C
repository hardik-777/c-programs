/*WAP to find the efficiency of the worker.
  Author: Hardik Sharma  Roll No. 19301   Date: 12-07-2021*/
#include<stdio.h>
#include<conio.h>
int main()
  {
     int hours;
     clrscr();
     printf("Enter the Time taken by worker= ");
     scanf("%d",&hours);
     if(hours>=2 && hours<=10)
	{
	   printf("Worker is Highly efficient.");
	}
     else if(hours>10 && hours<=20)
	{
	   printf("Worker have to improve their speed.");
	}
     else  if(hours>20 && hours<=30)
	{
	   printf("Worker is given training to improve his speed.");
	}
     else
	{
	   printf("Worker have to leave the company.");
	}
     getch();
  }