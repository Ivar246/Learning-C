// WAP a c program to find sum of n natural numbers using recursion function 
#include<stdio.h>
int main()
{
    int n; 
    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("The sum of first %d natural number is: %d\n", n, recursionfun(n));

    return 0;
}
int recursionfun(int n){
    int sum;
    if(n==1){
        return 1;
    }
    else{
        sum=n+recursionfun(n-1);
    }
    return sum;
}