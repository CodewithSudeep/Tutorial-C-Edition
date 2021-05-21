W3.6) What is problem in the following code?

void main(){
    extern int i;
    printf(“%d”,i);
}
int i=6;

Ans: correction of this code:
	#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    printf(i=6);
    return 0;
}



