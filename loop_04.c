//WAP a c program to display n natural number and their cube
#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the number of natural number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("number_0%d: %d => The cube of %d is %d\n", i, i, i, (i*i*i));
    }
    return 0;
}