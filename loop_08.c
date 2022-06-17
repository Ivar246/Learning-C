//WAP a c program to print
/*
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main(){
    int i, j, n, count=1;
    printf("Enter the number of row:");
    scanf("%d", &n);

    //printing pattern
    for(i=0; i<=n; i++){
        for (j=0; j<=i; j++)
        {
            printf("%d ", count++);
        }
        printf("\n");
        
    }
    return 0;
}