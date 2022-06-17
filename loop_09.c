//WAP a c program to print the following pattern
/*
        *
       * *
      * * *
     * * * *
*/
#include<stdio.h>
int main(){
    int i, j, k, n, space;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    space= n-1;
    
    for(i=1; i<=n; i++){
        for(k=space; k>=1; k--){
            printf(" ");            
        }

        for(j=1; j<=i; j++){
            printf("* ");         
        }
        printf("\n");
        space--;
    }
    return 0;
}