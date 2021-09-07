/* WAP to calcule meter,centimeter,feet and inches
   Author:Hardik Sharma Roll NO. 19301  Date: 10-07-2021*/
#include<stdio.h>
#include<conio.h>
void main()
  {
     float kilometer,meter,centimeter,feet,inch;
     clrscr();
     printf("Enter the value of kilometer");
     scanf("%f",&kilometer);
     meter=1000*kilometer;
     //Formula for centimeter
     centimeter=100*meter;
     //Formula for inches
     inch=3280.83*kilometer;
     //Formula for feet
     feet=39370.07*kilometer;
     printf("\nDistance in meter is: %.2f",meter);
     printf("\nDistance in centimeter: %.2f",centimeter);
     printf("\nDistance in inches: %.2f",inch);
     printf("\nDistance in feet: %.2f",feet);
     getch();
  }