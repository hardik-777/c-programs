/*WAP to print the multiplication table for any number
  Author: Hardik Sharma  Roll No. 19301   Date:22-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int number,i,table;
     clrscr();
     printf("Enter any number :");
     scanf("%d",&number);
     for(i=1;i<=10;i++)
	{
	   table=number*i;
	   printf("%d*%d = %d\n",number,i,table);
	}
     getch();
  }