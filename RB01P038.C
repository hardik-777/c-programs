/*WAP to convert decimal number into octal number
  Author: Hardik Shrama  Roll No. 19301  Date 22-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int decimal,reminder,i=1;
     long int octal=0;
     clrscr();
     printf("Enter any decimal number : ");
     scanf("%d",&decimal);
     while(decimal>0)
	{
	   reminder=decimal%8;
	   decimal=decimal/8;
	   octal=octal+(i*reminder);
	   i=i*10;
	}
     printf("Octal number is : %ld",octal);
     getch();
  }