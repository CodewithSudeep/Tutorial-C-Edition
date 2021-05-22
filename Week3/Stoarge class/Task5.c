W3.5) What are storage classes in C with examples?
Ans: auto,register,static and extern are storage classes in c .


 example of Auto storage classes:
	{
 int mount;
 auto int month;
} 
 
  example of register storage classes:

{
 register int miles;
} 


 example of static storage classes:
 	
 	#include <stdio.h>
/* function declaration */
void func(void);
static int count = 5; /* global variable */
main()
{
 while(count--)
 {
 func();
 }
 return 0;
}
/* function definition */
void func( void )
{
 static int i = 5; /* local static variable */
 i++;
 printf("i is %d and count is %d\n", i, count);
}


example of extern storage classes:
	
	The extern modifier is most commonly used when there are two or more files sharing the 
same global variables or functions as explained below.

  First File: main.c
#include <stdio.h>
int count ;
extern void write_extern();
main()
{
 write_extern();
}


  Second File: write.c
#include <stdio.h>
extern int count;
void write_extern(void)
{
 count = 5;
 printf("count is %d\n", count);
}
	
	
	

