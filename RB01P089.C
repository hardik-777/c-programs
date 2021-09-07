/*Program 89 - Make a program for binary search
  Author:Hardik Sharma  Roll No. 19301   Date:01-09-2021*/

#include<stdio.h>
int main()
  {
	  int arr[100];
	  int i,num,BEG,MID,END,search;
	  clrscr();
	  printf("Enter the number of elements:");
	  scanf("%d",&num);

	  printf("Enter %d elements",num);
	  for(i=0;i<num;i++)
		  {
			  scanf("%d",&arr[i]);
		  }

	  printf("Enter the element to search:");
	  scanf("%d",&search);

	  BEG = 0;
	  END = num-1;
	  MID = (BEG+END)/2;

	  while(BEG<=END)
		  {
			  if(arr[MID] < search)
				  {
					  BEG = MID + 1;
				  }
			  else if(arr[MID]==search)
				  {
					  printf("%d found at location %d",search,MID+1);
				  }
			  else
				  {
					  END = MID - 1;
				  }

			  MID = (BEG+END)/2;
		  }
	  if(BEG > END)
		  printf("%d not found in the list",search);
	  return 0;
  }