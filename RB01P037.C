/*WAP to convert decimal number into binary number
  Author: Hardik Shrama  Roll No. 19301  Date 22-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int decimal,reminder,i=1,number;
     long int binary=0;
     clrscr();
     printf("Enter any decimal number : ");
     scanf("%d",&decimal);
     clrscr();
     scanf("%d",&number);
     while(decimal>0)
	{
	   reminder=decimal%2;
	   decimal=decimal/2;
	   binary=binary+(i*reminder);
	   i=i*10;
	}
     printf("\nBinary number is : %ld",binary);
     getch();
  }