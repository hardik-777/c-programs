/*WAP to check enter number is an lower case or not ,number is an upper case or not.
character entered is an alphabet or not ,Biggest of two number
Author: Hardik Sharma  Roll No.19301  Date:24-08-2021*/
#include<stdio.h>
#define LOWER(ch) (ch>=97&&ch<=122)
#define UPPER(h) (h>=65&&h<=90)
#define ALPHA(a) (a>=65&&a<=90)||(a>=97&&a<=122)
#define BIG(c) (c>b)
void main()
  {
     int i=0;
     clrscr();
     while(1)
	{
	   printf("\n---- 1-To check enter number is an lower case or not ----\n");
	   printf("---- 2-To check enter number is an upper case or not ----\n");
	   printf("---- 3-To check character entered is an alphabet or not ----\n");
	   printf("---- 4-Biggest of two number ----\n");
	   printf("---- 5-To exit the program ----\n");
	   printf("Enter your choice");
	   scanf("%d",&i);
	   clrscr();
	   switch(i)
	      {
		 case 1:
		    {
		       char ch;
		       printf("Enter any Alphabet:");
		       fflush(stdin);
		       scanf("%c",&ch);
		       if(LOWER(ch))
			  {
			     printf("You entered the lower alphabet");
			     break;
			  }
		       else
			  {
			     printf("Given alphabet is not in lower case");
			     break;
			  }
		    }
		 case 2:
		    {
		       char h;
		       printf("Enter any Alphabet :");
		       fflush(stdin);
		       scanf("%c",&h);
		       if(UPPER(h))
			  {
			     printf("You entered the upper alphabet");
			     break;
			  }
		       else
			  {
			     printf("Given alphabet is not in upper case");
			     break;
			  }
		    }
		 case 3:
		    {
		       char a;
		       printf("Enter the character:");
		       fflush(stdin);
		       scanf("%c",&a);
		       if(ALPHA(a))
			  {
			     printf("You entered the alphabet");
			     break;
			  }
		       else
			  {
			     printf("Given character is not alphabet");
			     break;
			  }
		    }
		 case 4:
		    {
		       int c,b;
		       printf("Enter the value of A :");
		       scanf("%d",&c);
		       printf("Enter the value of B :");
		       scanf("%d",&b);
		       if(BIG(c))
			  {
			     printf("A is biggest");
			  }
		       else
			  {
			     printf("B is biggest");
			  }
		       break;
		    }
		 case 5:
		    {
		       exit(0);
		    }
		 default:
		    {
		       printf("\nPlease enter the valid option...");
		       break;
		    }
	      }
	}
     getch();
  }

