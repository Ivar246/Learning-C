/*
          *
        * * *
      * * * * *
*/
#include <stdio.h>
void main()
{
   int i,j,space,n,k;
   printf("Enter number of rows : ");
   scanf("%d",&n);

   space=n+3-1;                    //you can control the space from this section 
   //process
   for(i=1; i<=n; i++){
       for(k=space; k>=1; k--){
           printf(" ");            //this print space 
       }
       for(j=1; j<=2*i-1;j++){
           printf("*");           //this print *
       }
       printf("\n");
       space--;                   //this decreases the space by 1 coming down the row 
   }
   }
