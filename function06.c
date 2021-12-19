//create a function for  add subtract and square of two number
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int getSquare(int c);

int main(){
    int Fn, Sn;
    printf("Enter the first number:");
    scanf("%d", &Fn);
    printf("Enter Second number:");
    scanf("%d", &Sn);

    printf("The sum of %d and %d is %d\n", Fn, Sn, add(Fn, Sn));
    printf("The difference of %d and %d is %d\n", Fn, Sn, sub(Fn, Sn));
    return 0;
}
int add(int a, int b){
    int sum=a+b;
    return sum;
}
int sub(int a, int b){
    int sub=a-b;
    return sub;
}
int getSquare(int c){
    int square=c*c;
    return square;
}