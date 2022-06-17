//WAP a c program to  print series like  1 + 11 + 111 + ... and its sum
#include<stdio.h>
int main(){
    int n;
    long t=1, sum=0;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("The required series is:\n");
    for(int i=1; i<=n; i++){
        printf("%ld ", t);

        if(i<t){
            printf("+ ");
        }
        
        sum+=t;
        t=(10*t)+1;
    
    }
    printf("\nThe required sum of the series is: %ld\n", sum);
    return 0;
}