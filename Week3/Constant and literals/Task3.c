//W3.3) Write the example of code  to show few escape sequence characters.


#include <stdio.h>
#include <conio.h>
int main()

{
	int a=5,b=6,c;
    c=a+b;
    printf ("sum of \t %d and \t %d is \t %d ",a,b,c);//horizontal tab
	printf("\n sum of %d and %d is %d",a,b,c);//new line
	printf("\n sum of %d and %d is %d \a",a,b,c);//alert or bell

	return 0;
}

  


