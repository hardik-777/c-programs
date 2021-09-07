/*WAP to print the prime number from 2 to range entered by user
  Author : Hardik Sharma  Roll No 19301  Date 16-07-2021*/

#include<stdio.h>
#include<conio.h>
void main()
  {
     int j,i=1,range,count,number;
     clrscr();
     printf("Enter the range : ");
     scanf("%d",&range);
     printf("\n-------- Prime numbers are --------\n");
     for(i=2;i<=range;i++)
	{
	   count=0;
	   for(j=2;j<=i/2;j++)
	      {
		 if(i%j==0)
		    {  count++;
		       break;
		    }
	      }
	   if(count==0)
	      {
		 printf("\t%d",i);
	      }
	}
     getch();
  }

