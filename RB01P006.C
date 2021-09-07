/* WAP to interchange the values
   Author  Hardik   Roll no.19301    Date:10-07-2021 */

#include<stdio.h>
#include<conio.h>
void main()
  {
     int num1,num2,temp;
     clrscr();
     printf("Enter the value of first number : ");
     scanf("%d",&num1);
     printf("Enter the value of second number: ");
     scanf("%d",&num2);
     temp=num1;
     num1=num2;
     num2=temp;
     printf("\nSwap value of first number: %d",num1);
     printf("\nSwap value of second number: %d",num2);
     getch();
  }