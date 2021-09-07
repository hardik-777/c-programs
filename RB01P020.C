/*Program which reads a character from keyboard and reports whether it is a vowel, consonant or any other non-alphabet.
  Author:Hardik Sharma  Roll No. 19301  Date: 12-07-2021*/
#include<stdio.h>
#include<conio.h>
int main()
  {
     char character;
     clrscr();
     printf("Enter any Character= ");
     scanf("%c",&character);
     if((character>=65&&character<=90)||(character>=97&&character<=122))
	{
	   if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
	      {
		 printf("%c is a Vowel.",character);
	      }
	   else
	      {
		 printf("%c is a Cosonant.",character);
	      }
	}
     else
	{
	   printf("You entered any other non-alphabet character.");
	}
     getch();
  }

