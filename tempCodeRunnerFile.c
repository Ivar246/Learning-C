#include<stdio.h>
int main()
{
    int n, f=1;
    printf("Enter any number: ");
    scanf("%d", &n);
    top:
        if(n==1){
            printf("%d", n);
        }
        else{
            f*=n;
            n--;
            if(n!=1){
                goto top;
            }
            printf("The factorial of %d is %d", n, f);
        }
    return 0;
}