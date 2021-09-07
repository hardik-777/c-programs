/* write a menu driven program for factor,prime or odd number
   Author:Hardik   Roll no. 19301   Date : 12-08-2021*/

#include<stdio.h>
#include<conio.h>
void main()
  {
     int ch,num,i,factor=1,count;
     clrscr();
     while(i)
	{
	   clrscr();
	   printf("\nEnter 1 for check factorial of a number :");
	   printf("\nEnenter 2 for check number is a prime or not :");
	   printf("\nEenter 3 for check number is even or odd :");
	   printf("\nEnter 4 for exit");
	   printf("\nEnter your choice :");
	   scanf("%d",&ch);
	   switch(ch)
	      {
		 case 1:
		    {
		       printf("\nEnter any number to check the factor of a number :");
		       scanf("%d",&num);
		       for(i=1;i<=num;i++)
			  {
			     factor=factor*i;
			     count++;
			  }
		       printf("Factorial value of entered number : %d",factor);
		       getch();
		       break;
		    }
		 case 2:
		    {
		       printf("\nEnter any number to check the number is prime or not :");
		       scanf("%d",&num);
		       count=0;
		       for(i=2;i<=num/2;i++)
			  {
			     if(num%i==0)
				{
				   count++;
				   break;
				}
			  }
			     if(count==0)
				{
				   printf("%d is a prime number",num);
				}
			     else
				{
				   printf("%d is not an prime number",num);
				}
		       getch();
		       break;
		    }
		 case 3:
		    {
		       printf("\nEnter number to check number is odd or even :");
		       scanf("%d",&num);
		       if(num%2==0)
			  {
			     printf("%d is even number",num);
			  }
		       else
			  {
			     printf("%d is an odd number",num);
			  }
		       getch();
		       break;
		    }
		 case 4:
		    {
		       exit();
		       getch();
		       break;
		    }
		 default :
		    {
		       printf("You entered wrong number");
		       printf("Please enter the number between 1 to 4");
		    }
	      }
	}
     getch();
  }


