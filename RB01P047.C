/*WAP to print the pattern in which the size is entered by the user
  Author : Hardik Sharma  Roll No. 19301   Date: 24-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int i,j,size;
     clrscr();
     printf("Enter the size :");
     scanf("%d",&size);
     for(i=1;i<=size;i++)
	{
	   for(j=size;j>i;j--)
	      {
		 printf(" ");
	      }
	   for(j=1;j<=i;j++)
	      {
		 printf("*");
	      }
	   printf("\n");
	}
     getch();
  }
