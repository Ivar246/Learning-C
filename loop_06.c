//WAP a c program to find print the right angle traingle of *
#include<stdio.h>
int main(){
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){
            printf("*\t");     // \t print the space equivalent to one tab
        }
        printf("\n");
    }
    return 0;
}