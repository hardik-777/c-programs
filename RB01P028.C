/*WAP to calculate the factorial value of any number
  Author:Hardik Sharma  Roll No. 19301  Date:15-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int i,factorial=1,number;
     clrscr();
     printf("Enter any number :");
     scanf("%d",&number);
     for(i=1;i<=number;i++)
	{
	   factorial=factorial*i;
	}
     printf("\nFactorial of %d:%d",number,factorial);
     getch();
  }