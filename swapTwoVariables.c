//WAP a c program to swap two variables
#include<stdio.h>
int main(){
    int a=4;
    int b=6;
    int c;
    //before swapping
    printf("The value of a: %d\n", a);
    printf("The value of b: %d\n", b);
    //swappping 
    c=a;
    a=b;
    b=c;
    //after swapping
    printf("The value of a: %d\n", a);
    printf("The value of b: %d\n", b);
return 0;    
}