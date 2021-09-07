/*WAP to find out the Second largest element of an array
  Author:Hardik Sharma  Roll No. 19301   Date:26-08-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int arr[20],i,number,largest=0,smallest,j,second;
     clrscr();
     printf("Enter the size of an array :");
     scanf("%d",&number);
     for(i=0;i<number;i++)
	{
	   printf("Enter %d elements :",i+1);
	   scanf("%d",&arr[i]);
	}
     second=largest=arr[0];
     for(i=0;i<number;i++)
	{
	   if(arr[i]>largest)
	      {
		 second=largest;
		 largest=arr[i];
	      }
	}
     printf("\nlargest element :%d",second);
     getch();
  }