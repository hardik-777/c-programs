/*WAP to print the ASCII values
  Author: Hardik Sharma  Roll No. 19301  Date:15-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int i;
     clrscr();
     printf("\n---------- ASCII ----------\n");
     for(i=1;i<=255;i++)
	{
	   printf("ASCII value of %c : %d\n",i,i);
	   getch();
	}
     getch();
  }