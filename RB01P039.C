/*WAP to check the positive, negative and zero number
  Author:Hardik Sharma   Roll No. 19301   Date : 23-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int positive=0,negative=0,zero=0,number;
     char choice;
     clrscr();
     do
	{
	   printf("Enter any number");
	   scanf("%d",&number);
	   if(number>0)
	      {
		 positive++;
	      }
	   else if(number<0)
	      {
		 negative++;
	      }
	   else
	      {
		 zero++;
	      }
	   printf("Do you want to continue (y/n)\n");
	   fflush(stdin);
	   scanf("%c",&choice);

	}
     while(choice =='y' || choice=='Y');
	{
	   printf("Positive value : %d\n",positive);
	   printf("Negative value : %d\n",negative);
	   printf("Zero number : %d\n",zero);
	}
     getch();
  }
