/*
        * 
       * *
      *   *
     *     *
      *   *
       * *
        *  
*/
#include<stdio.h>
int main(){
    int n, i, j, k;
    char symb;
    printf("Enter the character you want to print in diamond:");
    scanf("%c", &symb);
    printf("Enter the number of row:");
    scanf("%d", &n);


   for(i=1; i<=n; i++){
       for(j=i; j<=n; j++){
           printf(" ");
       }

       for(k=1; k<=(2*i-1); k++){
           if(k==1 ||(k==2*i-1)){
               printf("%c", symb);               
           }else{
               printf(" ");
           }
       }
       printf("\n");
   }

   for(i=n-1; i>=1; i--){
       for(j=n; j>=i; j--){
           printf(" ");
       }

       for(k=1; k<=(2*i-1); k++ ){
           if(k==1 || k==(2*i-1)){
               printf("%c", symb);
           }
           else{
               printf(" ");
           }
       }
       printf("\n");
   }
   return 0;
   }