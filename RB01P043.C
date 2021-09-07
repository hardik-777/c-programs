#include<stdio.h>
#include<conio.h>
void main()
   {
      int a=0,b=1,sum,number;
      clrscr();
      printf("Enter any numnber : ");
      scanf("%d",&number);
      printf("Fibonacii series : %d\t%d\t",a,b);
      sum=a+b;
      while(sum<=number)
	 {
	    printf("%d\t",sum);
	    a=b;
	    b=sum;
	    sum=a+b;
	 }
     getch();
   }