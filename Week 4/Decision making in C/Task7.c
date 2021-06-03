//W4.7)  Program to calculate the area of a rectangle or circle or triangle by taking the user’s choice.(Use switch loop)

#include <stdio.h>
#include <math.h>  

int main()

{

int choice,r,a,b,rectarea;

float circlearea, s1,s2,s3;

float s,triarea2;

printf("\n Three Choices ");

printf("\n 1- rectangle 2- circle 3- triangle");

printf("\n Enter your choice :");

scanf("%d",&choice);


switch(choice)

{

case 1:  

printf("\n Enter breadth and length of rectangle separated by comma:");

 scanf("%d,%d",&a,&b);

 rectarea = a * b;

 printf("Area of rectangle with breadth %d and length %d is %d units",a,b,rectarea);

 break;

case 2:

printf("\n Enter the radius of circle:");

 scanf("%d",&r);

 circlearea = 3.14 * r * r;

 printf("Area of triangle with radius %d is %f units ",r, circlearea);

 break;

case 3:

 printf("\n Enter the three side of triangle seprated by comma :");

 scanf("%f,%f,%f",&s1,&s2,&s3);

 s = (s1 + s2 + s3)/2;

 triarea2 =sqrt(s *((s - s1) * (s - s2) * (s - s3)));
 



 printf("Area of triangle is %f",triarea2);

 break;

default:

 printf("Invalid choice");
 
}
return 0;
}

	



