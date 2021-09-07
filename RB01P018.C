/*WAP to check that the entered character is a capital letter, a small case letter
  and a digit or a special symbol
  Author : Hardik Sharma  Roll No. 19301  Date: 12-07-2021*/
#include<stdio.h>
#include<conio.h>
int main()
  {
     char character;
     clrscr();
     printf("Enter a character=");
     scanf("%c",&character);
     if(character>=65 && character<=90)
	{
	   printf("--- Entered character is a capital letter ---" );
	}
     else
	{
	   if(character>=97&&character<=122)
	      {
		 printf("--- Entered character is a small case letter ---");
	      }
	   else
	      {
		 if(character>=48&&character<=57)
		    {
		       printf("--- Entered character is a digit ---");
		    }
		 else
		    {
		       printf("--- Entered character is a special symbol ---");
		    }
	      }
	}
     getch();
  }