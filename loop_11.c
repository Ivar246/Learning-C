/*
               *
             * * *
           * * * * *
         * * * * * * *
         * * * * * * *
           * * * * *
             * * *
               * 
  =>diamond structure
*/
#include<stdio.h>
int main(){
    int i, j, k, n, space;
    printf("Enter the number of rows:");
    scanf("%d", &n);

    space= n+4-1;

    for(i=1; i<=n; i++){
        for(k=space; k>=1; k--)
            printf(" ");

        for(j=1; j<=2*i-1; j++)
            printf("*");

        printf("\n");
        space--;
    }

    for(i=n; i>=1; i--){
        for(k=1; k<=n+4-i; k++)
            printf(" ");

        for(j=1; j<=2*i-1; j++)
            printf("*");
        printf("\n");
    }
    

    
     

    return 0;
}