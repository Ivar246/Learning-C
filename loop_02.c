//WAP a c program to print n natural number and their sum 
#include<stdio.h>
int main(){
    int i, n, sum=0;  //sum=0 initializing the sum
    printf("Enter the number of natural number:");
    scanf("%d", &n);

    printf("The n natural number are:\n");
    for(i=1; i<=n; i++){
        printf("%d\n", i);
        sum+=i;
    }
    printf("The sum of %d natural number is: %d", n, sum);


    return 0;
}