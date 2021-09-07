/*WAP for insertion sort
  Author:Hardik Sharma  Roll No. 19301   Date:27-08-2021
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int i,j, k,temp,number;
     int arr[20];
     clrscr();
     printf("Enter the size of an array :");
     scanf("%d",&number);
     for(i=0;i<number;i++)
	{
	   printf("Enter %d element of array",i+1);
	   scanf("%d",&arr[i]);
	}
     for(i=1; i<number; i++)
	{
	   temp = arr[i];
	   j= i-1;
	   while(j>=0 && temp <= arr[j])
	      {
		 arr[j+1] = arr[j];
		 j = j-1;
	      }
	   arr[j+1] = temp;
	}
     for(i=0;i<number;i++)
	{
	   printf("\n%d\n",arr[i]);
	}
    getch();
  }