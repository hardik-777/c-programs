/*WAP to print the pattern
  Author:Hardik Sharma  Roll No. 19301   date:27-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int i,j,k,size;
     clrscr();
     printf("Enter the size");
     scanf("%d",&size);
     for(i=1;i<=size;i++)
	{
	   if(i%2==0)
	      {
		 for(j=1;j<=i;j++)
		    {
		       printf("%d",j);
		    }
	      }
	   else
	      {
		 for(k=i;k>=1;k--)
		    {
		       printf("%d",k);
		    }
	      }
	   printf("\n");
	}
     getch();
  }