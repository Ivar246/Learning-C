#include<stdio.h>
int main()
{
    int num[10], i, p, c, j;
    printf("Enter any 10 numbers: ");
    for(i=0; i<10;i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\nThe prime number are: ");
    for(i=0; i<10;i++)
    {
     p=num[i];
     c = 0;
     for(j=1; j<=p; j++)
     {
        if(num[i]%j == 0){
            c++;
        }
     }   
     if(c == 2) 
        printf("%d\t", p);
    }
    
    return 0;
}