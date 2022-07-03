#include<stdio.h>
#include<math.h>

int main(){
    int n, sum=0, i;
    printf("Enter any number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += i*i*i;
    }

    printf("The sum of cube of first %d natural numbers is %d.", n, sum);
    return 0;
}