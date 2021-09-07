/* WAP to print the currency notes
Author:Hardik    Roll no.19301   Date 10-07-2021*/

#include<stdio.h>
#include<conio.h>
void main()
  {
     int five,amount,hundred,fifty,ten;
     clrscr();
     printf("Enter the amount");
     scanf("%d",&amount);
     hundred=amount/100;
     amount=amount%100;
     fifty=amount/50;
     amount=amount%50;
     ten=amount/10;
     amount=amount%10;
     five=amount/5;
     amount=amount%5;
     printf("\nNote of 100 = %d",hundred);
     printf("\nNote of 50  = %d",fifty);
     printf("\nNote of 10  = %d",ten);
     printf("\nNote of 5   = %d",five);
     getch();
  }