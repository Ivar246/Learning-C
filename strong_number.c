#include<stdio.h>
// int sumOfDigits(int n);
int main()
{
    int n, i, r, q, f, s;
    printf("Enter any number: ");
    scanf("%d",&n);
    int j;
    printf("The strong number between 1 to %d are:\n", n);
    for(j=1; j<= n; j++)
    {
        q=j; 
        s=0;
        while(q>0)
        {
            r=q%10;
            q=q/10;
            f=1;

            for(i=1;i<=r;i++)
            {
                f *= i;
            }

            s+=f;
        }

        if(s==j) 
        {
        printf("%d\t", j);
        }

    }  
}