/*WAP to print the smily on the screen
  Author: Hardik Sharma  Roll No. 19301  Date: 15-07-2021*/

#include<stdio.h>
#include<conio.h>
void main()
  {
     int  i,j;
     char smily=1;
     clrscr();
     printf("---------- SMILY -----------");
     for(i=1;i<=25;i++)
	{
	   for(j=1;j<=80;j++)
	      {
		 printf("%c",smily);
	      }
	}
     getch();
  }