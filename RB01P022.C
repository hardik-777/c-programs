/*Program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.
  Author : Hardik Sharma  Roll No. 19301   Date : 12-07-2021*/

#include <stdio.h>
int main()
  {
     int side1, side2, side3;
     printf("Enter side 1 : ");
     scanf("%d", &side1);
     printf("Enter side 2 : ");
     scanf("%d", &side2);
     printf("Enter side 3 : ");
     scanf("%d", &side3);
     if ((side1 * side1 == (side2 * side2) + (side3 * side3)) || (side2 * side2 == (side1 * side1) + (side3 * side3)) || (side3 * side3 == (side2 * side2) + (side1 * side1)))
	{
	   printf("Right angled triangle");
	}
     else if (side1 == side2 && side2 == side3)
	{
	   printf("Triangle is equilateral");
	}
     else if (side1 == side2 || side1 == side3 || side2 == side3)
	{
	   printf("Triangle is isosceles");
	}
     else
	{
	   printf("triangle is scalene");
	}
     getch();
  }