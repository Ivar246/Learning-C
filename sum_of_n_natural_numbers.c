#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += i;
    }

    printf("The sum of %d conseutive natural numbers is %d", n, sum);
    return 0;
}
