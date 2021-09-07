/*WAP to check the armstrong number
  Author: Hardik Sharma  Roll No. 19301  Date: 16-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int reminder,number,sum=0,org_num;
     clrscr();
     printf("Enter any number : ");
     scanf("%d",&number);
     org_num=number;
     while(number!=0)
	{
	   reminder=number%10;
	   sum=sum+reminder*reminder*reminder;
	   number=number/10;
	}
     if(org_num==sum)
	{
	   printf("%d is an armstrong number",org_num);
	}
     else
	{
	   printf("%d is not an armstrong number",org_num);
	}
     getch();
  }