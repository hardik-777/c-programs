/*WAP to check the power of a number
  Author:Hardik Sharma  Roll no.19301    Date:12/08/2019*/

#include<stdio.h>
#include<conio.h>
int powerf(int no,int p);
void main()
  {
     int num,power,pow;
     clrscr();
     printf("Enter any number");
     scanf("%d",&num);
     printf("Enter the power of a number");
     scanf("%d",&power);
     pow=powerf(num,power);
     printf("Power of a number is %d",pow);
     getch();
  }
int powerf(int no,int p)
  {
     int i=1,a=1;
     while(i<=p)
	{
	   a=a*no;
	   i++;
	}
     return(a);
  }
