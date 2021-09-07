/*WAP to check the number is palindrome or not
  Author: Hardik sharma  Roll NO. 19301  Date : 16-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int number,reverse=0,reminder,org_number;
     clrscr();
     printf("Enter any number :");
     scanf("%d",&number);
     org_number=number;
     while(number!=0)
	{
	   reminder=number%10;
	   reverse=reverse*10+reminder;
	   number=number/10;
	}
     if(org_number==reverse)
	{
	   printf("%d is palindrome number",reverse);
	}
     else
	{
	   printf("%d is not a palindrome number",reverse);
	}

     getch();
  }