//W3.6) What is problem in the following code?

void main(){
    extern int i;
    printf("%d",i);
}
int i=6;

//Ans: %d literal was absent.
