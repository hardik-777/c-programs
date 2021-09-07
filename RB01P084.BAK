/*WAP to perform bubble sort
  Author:Hardik Sharma   Roll No. 19301    Date:26-08-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int arr[20],size,i,j,k,temp;
     clrscr();
     printf("Enter the size of an array");
     scanf("%d",&size);
     for(i=0;i<size;i++)
	{
	   printf("Enter %d Element  of an array",i+1);
	   scanf("%d",&arr[i]);
	}
     for(i=0;i<size-1;i++)
	{
	   for(j=0;j<size-i-1;j++)
	      {
		 if(arr[j]>arr[j+1])
		    {
		       temp=arr[j];
		       arr[j]=arr[j+1];
		       arr[j+1]=temp;
		    }
	      }
	}
     for(i=0;i<size;i++)
	{
	   printf("\n%d",arr[i]);
	}
     getch();
  }
