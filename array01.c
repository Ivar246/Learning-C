//WAP a c program to accept data from the user and storing in array and then displaying
#include<stdio.h>
int main(){
    int arr[10];
    int i;
    for(i=0; i<=10; i++){
        printf("Element- %d:  ", i);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<=10; i++){
        printf("array[%d]= %d\n ", i, arr[i]);
    }
    printf("\n");
    return 0;
}