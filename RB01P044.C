/* WAP to print the first n terms of fibonacci series
   Author: Hardik Sharma   Roll no. 19301  Date: 22-07-2021*/


#include<stdio.h>
#include<conio.h>
void main()
  {
     int i,num1=0,num2=1,num3,num;
     clrscr();
     printf("Enter any number :");
     scanf("%d",&num);
     printf("%d\t%d",num1,num2);
     for(i=3;i<=num;i++)
	{
	   num3=num1+num2;
	   printf("\t%d",num3);
	   num1=num2;
	   num2=num3;

	}
     getch();
  }
