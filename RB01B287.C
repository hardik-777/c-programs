/*WAP to print the address and value
  Author:Hardik Sharma  Roll No.19301   Date:26-08-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int i=3,*x;
     float j=1.5,*y;
     char k='c',*z;
     clrscr();
     printf("Value of i :%d\n",i);
     printf("Value of j :%d\n",j);
     printf("Value of k :%c\n",k);
     x=&i;
     y=&j;
     z=&k;
     printf("Original address in x :%u\n",x);
     printf("Original address in y :%u\n",y);
     printf("Original address in z :%u\n",z);
     x++;
     y++;
     z++;
     printf("New address in x :%u\n",x);
     printf("New address in y :%u\n",y);
     printf("New address in z :%u\n",z);
     getch();
  }







