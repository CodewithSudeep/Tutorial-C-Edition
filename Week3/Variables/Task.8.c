//W3.8)  What will be the output of the C program? And explain the reason.
#include<stdio.h>
int main(){
	int default = 5, a = 3;
	if(a > 2)
	printf("%d",default);	
	return 0;
}

A. Compilation error

B. Runtime error

C. 5

D. 3

//Ans. compilation error
//     default is a C reserved keyword and hence it cannot be used.
