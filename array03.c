//WAP a c program to find the sum of all elements stored in array
#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the size of array:");
    scanf("%d", &n);
    
    //array declaration
    int num[n];

    //storing value in array
    for(i=0; i<n; i++){
        printf("element-%d: ", i);
        scanf("%d",  &num[i]);
    }
    //displaying the stored data
    printf("The value stored in array area:\n");
    for(i=0; i<n;i++){
        printf("%3d", num[i]);
        sum+=num[i];
    }
   
    printf("\nThe sum is: %d", sum);
    
    
}