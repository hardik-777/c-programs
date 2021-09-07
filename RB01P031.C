/*WAP to calculate the power of a number
  Author: Hardik Sharma  Roll No. 19301   Date: 16-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int number,power,i,result=1;
     clrscr();
     printf("Enter any number :");
     scanf("%d",&number);
     printf("\nEnter power of the number : ");
     scanf("%d",&power);
     for(i=1;i<=power;i++)
	{
	   result=result*number;
	}
     printf("\nPower = %d",result);
     getch();
  }