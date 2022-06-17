#include<stdio.h>
int main(){
    int i, size, search, flag=0;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int num[size];
    //Storing values in array
    for(i=0; i<size; i++){
        printf("num[i]: ");
        scanf("%d", &num[i]);
    }
    
    printf("Enter the number you want to search:");
    scanf("%d", &search);
     for(i=0; i<size; i++){
         if(num[i]== search){
             flag=1;
         }
     }
     if (flag==1){
         printf("Search sucessfull.");
     }else{
         printf("Search unsucessfull.");
     }
    return 0;
} 