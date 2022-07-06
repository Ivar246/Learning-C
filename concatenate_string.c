#include<stdio.h>
int main()
{
    char s1[5], s2[5], s3[10];
    int i, j;
    printf("Enter any two string: \n");
    scanf("%s%s", s1, s2);
    
    for(i=0; s1[i]!= '\0'; i++)
    {
        s3[i] = s1[i];
    }

// i = 4 
    for(j=0; s2[j] != '\0'; j++){
        s3[i+j]= s2[j];
    }   
    s3[i+j] = '\0';
    printf("the concatenated string is %s\n", s3);
    return 0; 
}