//WAP a c program to find the multiflication table up to n terms
#include<stdio.h>
int main (){
    int i, j, n;
    printf("Enter the number up to which you want to find the multiplication table:");
    scanf("%d", &n);

    printf("___Multiplication Table from 1  to  %d___\n", n);
    for(i=1; i<=10; i++){
        for(j=1; j<=n; j++){
          j<=n-1?  printf("%d * %d = %d         ", j,i , (i*j)) : printf("%d * %d = %d ", j, i, (i*j));
        }
        printf("\n");
    }
    return 0;
}
