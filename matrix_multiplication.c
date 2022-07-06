#include<stdio.h>
int main()
{
    int m1[3][3], m2[3][3], p[3][3], i, j, k, s;
    printf("Enter the element in first matrix m1(row-wise:)\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element in first matrix m1(row-wise:)\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            s = 0;
            for(k=0; k<3; k++){
               s = s + m1[i][k]*m2[k][j];
            }
            p[i][j] = s;
        }
    }

    for(i=0; i<3; i++)
    {
        printf("|");
        for(j=0; j<3; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("|");
        printf("\n");
    }

    return 0;
}