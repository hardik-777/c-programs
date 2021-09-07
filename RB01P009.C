/* WAP to calculate the first and last digit of the number
   Author:Hardik sharma    Roll no.19301    Date 10-07-2021*/

#include<stdio.h>
#include<conio.h>
void main()
  {
    int d1,d2,d3,d4,num,sum;
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
    sum=d1+d4;
    printf("\nSum of first and last digit : %d",sum);
    getch();
  }
