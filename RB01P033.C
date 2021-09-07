/*WAP to print the armstrong number upto 500
  Author : Hardik Sharma   Roll No. 19301   Date : 16-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int loop,reminder,number,sum=0,org_number,range;
     clrscr();
     printf("-------- ARMSTRONG NUMBERS --------\n");
     for(loop=1;loop<=500;loop++)
	{
	   org_number=loop;
	   number=loop;
	   sum=0;
	   while(number!=0)
	      {
		 reminder=number%10;
		 sum=sum+(reminder*reminder*reminder);
		 number=number/10;
	      }
	   if(org_number==sum)
	      {
		 printf("%d\t",loop);
	      }
	}
     getch();
  }