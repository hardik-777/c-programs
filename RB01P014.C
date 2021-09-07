/*To check whether the triangle is valid or not
  Author : Hardik Sharma Roll No. 19301  Date=12-07-2021*/
#include<stdio.h>
#include<conio.h>
int main()
  {
     int angle1,angle2,angle3,sum;
     clrscr();
     printf("Enter the value of angle1 =");
     scanf("%d",&angle1);
     printf("Enter the value of angle2 =");
     scanf("%d",&angle2);
     printf("Enter the value of angle3 =");
     scanf("%d",&angle3);
     sum=angle1+angle2+angle3;
     if(sum==180)
	{
	   printf("Triangle is valid");
	}
     else
	{
	   printf("Triangle is invalid");
	}
     getch();
  }