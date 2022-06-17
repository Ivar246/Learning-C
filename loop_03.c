//WAP a cprogram to read 10 number from the user and their sum
#include<stdio.h>
int main(){
    int i, a, sum=0;
    printf("Enter the 10 numbers:\n");
    //accepting data from the user
    for(i=1; i<=10; i++){
        printf("num%d: ", i);
        scanf("%d", &a);

        sum+=a;
    }
    printf("The sum of numbers is:%d\n", sum);
    return 0;
}