//W3.7) What will be the output of the C program? Explain too.

#include<stdio.h>
int main()
{
	int class;
	int public = 5;
	int private = 10;
	int protected = 15;
	class = public + private + protected;
	printf("%d",class);
	return 0;
}


//Ans. class = public + private + protected => int = int + int + int => here it performs addition between integers.
