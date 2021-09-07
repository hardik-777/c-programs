/*WAP to calculate the total marks of the students and percentage
  Author : Hardik Sharma  Roll no. 19301  Date:10-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int hindi,english,math,total_marks;
     float percentage;
     clrscr();
     printf("Enter the marks of mathematics :");
     scanf("%d",&hindi);
     printf("Enter the marks of physics :");
     scanf("%d",&english);
     printf("Enter the marks of loc :");
     scanf("%d",&math);
     total_marks=hindi+english+math;
     printf("\nAggregate marks : %d",total_marks);
     percentage=(total_marks)*100.00/300.00;
     printf("\nPercentage : %.2f",percentage);
     getch();
  }
