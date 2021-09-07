/*WAP for Selection sort
  Author:Hardik Sharma  Roll No. 19301   Date:26-08-2021
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int arr[10],number;
     int i,j,pos,temp;
     clrscr();
     printf("Enter the size of array");
     scanf("%d",&number);
     for(i=0;i<number;i++)
	{
	   printf("Enter %d element:",i+1);
	   scanf("%d",&arr[i]);
	}
     for(i=0;i<number;i++)
	{
	   pos=i;
	   for(j=i+1;j<number;j++)
	      {
		 if(arr[pos]>arr[j])
		 pos=j;
	      }
	   if(pos!=i)
	      {
		 temp=arr[i];
		 arr[i]=arr[pos];
		 arr[pos]=temp;
	      }
	}
     printf("---- Elements after sorting ----\n");
     for(i=0;i<number;i++)
	{
	   printf("%d\t",arr[i]);
	}
     getch();
  }