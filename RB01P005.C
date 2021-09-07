/*WAP to find
  area of rectangle
  perimeter of rectangle
  area of circle
  circumference of circle
  Author: Hardik Sharma Roll No. 19301  Date 10-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     int length,bredth,perimeter,area;
     float radius,area1,circumference;
     clrscr();
     printf("Enter the length of rectangle :");
     scanf("%d",&length);
     printf("\nEnter the bredth of rectangle :");
     scanf("%d",&bredth);
      printf("\nEnter the radius of circle :");
     scanf("%f",&radius);
     perimeter=2*(length+bredth);
     printf("\nPerimeter of rectangle : %d",perimeter);
     area=length*bredth;
     printf("\nArea of rectangle : %d",area);

     area1=3.14*radius*radius;
     printf("\nArea of circle : %.2f",area1);
     circumference=2*3.14*radius;
     printf("\nCircumference of circle : %.2f",circumference);
     getch();
  }


