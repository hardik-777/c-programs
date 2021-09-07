/*WAP to check wether the number is prime or not
  Author: Hardik Sharma  Roll No. 19301  Date : 16-07-2021*/

#include<stdio.h>
#include<conio.h>
void main()
  {
     int number,i,count;
     clrscr();
     printf("Enter any number");
     scanf("%d",&number);
     count=0;
     for(i=2;i<=number/2;i++)
	{
	   if(number%i==0)
	      {
		 count++;
		 break;

	      }
	}
     if(count==0)
	{
	   printf("%d is a prime number",number);
	}
     else
	{
	   printf("\n%d is not an prime number",number);
	}
     getch();
  }

