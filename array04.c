//WAP a c program to copy an element of one array to another array
#include<stdio.h>
int main (){
    int i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int num1[n], num2[n] ;
    for(i=0; i<n; i++){
        printf("array[%d]:", i);
        scanf("%d", &num1[i]);
    }
    //displaying the elements of num1[];
    printf("Elements in the num1 array are:\n ");
     for(i=0; i<n; i++){
        printf("%3d", num1[i]);
     }
    //copying the element of first array to second array
    for(i=0; i<n; i++){
        num1[n]=num2[n];
    }
    //displaying the elements copied in num2[]
    printf("Elements copied into num2 array:\n");
    for(i=0; i<n; i++){
        printf("%3d", num2[i]);
    }
    printf("\n");


    

    return 0;
}