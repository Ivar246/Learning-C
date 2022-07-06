#include<stdio.h>
int main()
{
    int m1[3][3], m2[3][3], s[3][3], i, j;
    printf("Enter the element in first matrix m1(row-wise:)\n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element in first matrix m1(row-wise:)\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            s[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for(i=0; i<3; i++){
        printf("|");
        for(j=0; j<3; j++){
            printf("%d\t", s[i][j]);
        }
        printf("|");
        printf("\n");
    }

    return 0;
}