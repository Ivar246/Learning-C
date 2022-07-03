#include<stdio.h>
int main()
{
    int n, f=1, i=1;
    printf("Enter any number(greater than 0): ");
    scanf("%d", &n);

    fact:
        f*=i;
        i++;
        if(i<=n){
            goto fact;
        }

    printf("The factorial of %d is %d", n, f);
    return 0;
}