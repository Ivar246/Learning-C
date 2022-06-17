//WAP a c program to find the factorial of given number
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("The factorial of %d is %d.\n", num, factorial(num));

    return 0;
}
int factorial(int num){
    if(num==1){
        return 1;
    }
    return (num* factorial(num-1));
}