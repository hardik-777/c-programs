/* WAP to check the reverse of the number
   Author:Hardik   Roll no.19301    Date 03/09/2019*/

#include<stdio.h>
#include<conio.h>
void main()
  {
    int d1,d2,d3,d4,d5,num,reverse;
    clrscr();
    printf("Enter five numbers :");
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
    reverse=d1*10000+d2*1000+d3*100+d4*10+d5*1;
    printf("\nReverse of five numbers : %d",reverse);
    getch();
  }
