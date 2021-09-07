/*To determine the youngest of three
  Author: Hardik Sharma  Roll No. 19301  Date=12-07-2021*/
#include<stdio.h>
#include<conio.h>
int main()
  {
     int ram,shyam,ajay;
     clrscr();
     printf("Enter age of Ram=");
     scanf("%d",&ram);
     printf("Enter age of Shyam=");
     scanf("%d",&shyam);
     printf("Enter age of Ajay=");
     scanf("%d",&ajay);
     if(ram<shyam)
	{
	   if(ram<ajay)
	      {
		 printf("Ram is youngest");
	      }
	   else
	      {
		 printf("Ajay is youngest");
	      }
	}
     else
	{
	   if(shyam<ajay)
	      {
		 printf("Shyam is youngest");
	      }
	   else
	      {
		 printf("Ajay is youngest");
	      }
	}
     getch();
  }