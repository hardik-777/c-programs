/*WAP to find the range of the number
  Author:Hardik Sharma  Roll No. 19301   Date:24-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int number,large,range,small;
     char choice;
     clrscr();
     printf("Enter first number=");
     scanf("%d",&number);
     large=small=number;
     do
	{
	   printf("Enter second number=");
	   scanf("%d",&number);
	   if(large<number)
	      {
		 large=number;
	      }
	   if(number<small)
	      {
		 small=number;
	      }
	   printf("Do you want to continue=");
	   fflush(stdin);
	   scanf("%c",&choice);
	}
     while(choice=='y' || choice=='Y');
	range=large-small;
	printf("Large number : %d\nSmall number : %d",large,small);

	printf("\nRange:%d-%d : %d",large,small,range);
     getch();
  }