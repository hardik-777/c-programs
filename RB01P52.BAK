/*WAP to print he pattern
  Author: Hardik Sharma  Roll No. 19301  Date:30-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int size,i,j,k;
     clrscr();
     printf("Enter the size :");
     scanf("%d",&size);
     for(i=1;i<=size;i++)
	{
	   k=i-1;
	   for(j=1;j<=size-i;j++)
	      {
		 printf(" ");
	      }
	   for(j=1;j<=2*i-1;j++)
	      {

		 if(j<=i)
		    {
		       printf("%d",++k);
		    }
		 else
		    {
		       printf("%d",--k);
		    }
	      }
	   printf("\n");
	}
     getch();
  }