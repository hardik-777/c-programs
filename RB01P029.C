/*WAP to print the reverse of the number
  Author: Hardik sharma  Roll NO. 19301  Date : 16-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int number,reverse=0,reminder;
     clrscr();
     printf("Enter any number :");
     scanf("%d",&number);
     while(number!=0)
	{
	   reminder=number%10;
	   reverse=reverse*10+reminder;
	   number=number/10;
	}
     printf("\nReverse : %d",reverse);
     getch();
  }