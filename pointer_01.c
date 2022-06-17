#include<stdio.h>
int main(){
int a=10;
int *p;
p= &a;

printf("The value of a is %d\n", a);
printf("The address of a is %d\n", p); 
    return 0;
}