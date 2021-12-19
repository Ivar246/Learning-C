//WAP a c program to read n numbers in an array and display in reverse order 
#include<stdio.h>
int main (){
    int n, i;
  
    printf("Enter the number of terms:");
    scanf("%d", &n);
    //declaring array
    int num[n];
    //accepting data from the user and storing it in array
    for(i=0; i<n; i++){
        printf("Element-%d:  ", i);
        scanf("%d", &num[i]);
    }
    //displaying data 
    printf("Data stored in array are:\n");
    for(i=0; i<n; i++){
        printf(" %5d ", num[i] );
    }
    printf("\n");
    //displaying data in reverse order
    printf("Data after reversing the order:\n");
    for(i=n-1; i>=0; i--){
        printf("%5d", num[i]);
    }
    printf("\n");
    return 0;
}