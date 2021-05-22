//W3.4) What are the two simple ways in C to define constants? And write a code with it.

There are two simple ways in C to define constants:
1. Using #define preprocessor.
2. Using const keyword.

#define preprocessor to define a constant:


#include <stdio.h>
#define LENGTH 10 
#define WIDTH 5
#define NEWLINE '\n'
int main()
{
 int area; 
 
 area = LENGTH * WIDTH;
 printf("value of area : %d", area);
 printf("%c", NEWLINE);
 return 0;
}


const keyword to define costant:


#include <stdio.h>
int main()
{
 const int LENGTH = 10;
 const int WIDTH = 5;
 const char NEWLINE = '\n';
 int area; 
 
 area = LENGTH * WIDTH;
 printf("value of area : %d", area);
 printf("%c", NEWLINE);
 return 0;
}

