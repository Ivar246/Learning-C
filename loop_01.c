//WAP a c program for printing the n natural number 
#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the number of natural number:");
    scanf("%d", &n);

    printf("The %d natural number are:\n", n);
    for(i=1; i<=n; i++ ){
        printf("%d\n", i);
    }
}