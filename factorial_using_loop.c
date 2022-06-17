#include<stdio.h>
int main(){
    int n, factorial=1; 
    printf("Enter the number:\n");
    scanf("%d", &n);  
    for(int i=n; i>=1; i--){
                factorial*=i;
    }
    printf("The factorial of %d is %d.\n", n, factorial);
    return 0;
}