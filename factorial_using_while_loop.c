#include<stdio.h>
int main()
{
    int n, f=1, i=1;
    printf("Enter any number:");
    scnaf("%d", &n);
    while(i<=n){
        f*=i;
        i++;
    } 
    printf("The factorial of %d is %d", n, f);
    
    return 0;
}