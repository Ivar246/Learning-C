#include<stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d", &age);

    age>18 ? printf("You are voter.\n") : printf("You are not a voter\n");
    return 0;
}