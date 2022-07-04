#include<stdio.h>
int main()
{
    int n, i, j, c=0;
    printf("Enter any number: ");
    scanf("%d", &n);

//first logic to find the prime number
    // for(i=1; i<n; i++)
    // {
    //     if(n%i == 0){
    //         c++;
    //     }
    // }
    // if(c == 2){
    //     printf("%d is prime", n);
    // }
    // else{
    //     printf("not a prime");
    // }

    //or

    for(i=2; i<n; i++){
        if(n%i == 0){
            printf(" not a Prime number");
            break;
        }
        if(i==n){
            printf("prime");
        }
    }
    return 0;
}