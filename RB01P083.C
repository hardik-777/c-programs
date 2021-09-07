/*WAP to delete the duplicate element of an unsorted array
  Author:Hardik Sharma  Roll No.19301   Date:26-08-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int arr[20],i,j,k,number,largest=0,smallest,second;
     clrscr();
     printf("Enter the size of an array :");
     scanf("%d",&number);
     for(i=0;i<number;i++)
	{
	   printf("Enter %d elements :",i+1);
	   scanf("%d",&arr[i]);
	}
     for(i=0;i<number;i++)
	{
	   for(j=i+1;j<number;j++)
	      {
		 if(arr[i]==arr[j])
		    {
		       for(k=j;k<number;k++)
			  {
			     arr[k]=arr[k+1];
			  }
		       number--;
		    }
	      }
	}
     printf("---- Elements after deleting ----");
     for(i=0;i<number;i++)
	{
	   printf("\n%d",arr[i]);
	}
     getch();
  }


