/*WAP to print the profit and loss
  Author:Hardik Sharma  Roll No. 19301  date: 12-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int selling_price,cost_price,profit,loss;
     clrscr();
     printf("Enter the selling price");
     scanf("%d",&selling_price);
     printf("\nEnter cost price");
     scanf("%d",&cost_price);
     if(selling_price>cost_price)
	{
	   profit=selling_price-cost_price;
	   printf("\nProfit = %d",profit);
	}
     else
	{
	   if(cost_price>selling_price)
	      {
		 loss=cost_price-selling_price;
		 printf("\nLoss = %d",loss);
	      }
	   else
	      {
		 printf("\n No profit and no loss");
	      }
	}
     getch();
  }