//WAP a c program to print n numbers and sorting them in ascending order using array
#include<stdio.h>
int main(){
    int n, i, j;      //size of array
    printf("Enter the size of array:");
    scanf("%d", &n);
    //declaring array
    int array1[n];
    int temp;
    //storing value in array variable

     for(i=0; i<n; i++){
        printf("number %d: ", i+1);
        scanf("%d", &array1[i]);
    }
    //printing stored data 
    printf("The stored values are:");
    for(i=0; i<n; i++){
        printf("%5d", array1[i]);
    }
    printf("\n");

    //arranging in ascending order
    for(i=0; i<n ; i++){
        for(j=0; j<n; j++){
            if(array1[i] < array1[j]){
                temp= array1[i];
                array1[i]= array1[j];
                array1[j]=temp;
            }
        }
    }
    //printing value after sorting
    printf("The value after sorting array in ascending order is :\n");
     for(i=0; i<n; i++){
        printf("%5d", array1[i]);
    }

     printf("\n");
  
    return 0;


}