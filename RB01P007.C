/* WAP to calculate the sum of the digit of a number
   Author:Hardik     Roll no.19301    Date 10-08-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int d1,d2,d3,d4,d5,num,sum;
     clrscr();
     printf("Enter the numbers :");
     scanf("%d",&num);
     d1=num%10;
     num=num/10;
     d2=num%10;
     num=num/10;
     d3=num%10;
     num=num/10;
     d4=num%10;
     num=num/10;
     d5=num%10;
     num=num/10;
     sum=d1+d2+d3+d4+d5;
     printf("\nSum of the digits is%d",sum);
     getch();
  }