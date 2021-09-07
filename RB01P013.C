/*WAP to check that number is even or odd
  Author:Hardik Sharma  Roll No. 19301  date:12-07-2021*/
#include<STDIO.H>
#INCLUDE<CONIO.H>
void main()
  {
     int number;
     clrscr();
     printf("Enter any number");
     scanf("%d",&number);
     if(number%2==0)
	{
	   printf("%d is even number",number);
	}
     else
	{
	   printf("%d is odd number",number);
	}
     getch();
  }
