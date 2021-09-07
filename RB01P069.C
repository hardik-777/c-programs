/* program to calculate average and percentage of 3 subjects
Author:Hardik Sharma Roll no.19301 Date:16-08-2021*/
#include<stdio.h>
#include<conio.h>
void fun(int eng,int sci,int maths,int *avg,float *per);
void main()
  {
     int eng,sci,maths,avg;
     float per;
     clrscr();
     printf("Enter the marks of eng :");
     scanf("%d",&eng);
     printf("Enter the marks of sci :");
     scanf("%d",&sci);
     printf("Enter the marks of maths :");
     scanf("%d",&maths);
     fun(eng,sci,maths,&avg,&per);
     printf("Value of average : %d\n",avg );
     printf("Value of percentage : %.2f",per);
     getch();
  }
void fun(int eng,int sci,int maths,int *avg,float *per)
  {
     *avg=(eng+sci+maths)/3;
     *per=(eng+sci+maths)/300.0*100.0;
  }
