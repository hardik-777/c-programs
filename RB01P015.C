/*To calculate whether the entered number is palindrome or not
  Author:Hardik Sharma  Roll No. 19301   Date=12-07-2021*/
#include<stdio.h>
#include<conio.h>
int main()
  {
     int num,d1,d2,d3,d4,reverse,org_num;
     clrscr();
     printf("Enter a four digit number : ");
     scanf("%d",&num);
     org_num=num;
     d1=num%10;
     num=num/10;
     d2=num%10;
     num=num/10;
     d3=num%10;
     num=num/10;
     d4=num%10;
     reverse=d1*1000+d2*100+d3*10+d4;
     if(org_num==reverse)
	{
	   printf("%d is a palindrome number",org_num);
	}
     else
	{
	   printf("%d is not an palindrome number",org_num);
	}
     getch();
  }
