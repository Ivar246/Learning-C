#include<stdio.h>
int main()
{
    char s[20], r[20];
    int i, l=0;

    printf("Enter any string:\n");
    scanf("%s", s);

    // finding the length of string
    for(i=0; s[i] != '\0'; i++){
        l=l+1;
    }

    //reversing string
    for(i=0; i<l; i++){
        r[i] = s[l-1-i];    //l-1 is how array is indexed accord.. to its length
    }

    printf("The reversed string is %s", r);
    return 0;
}