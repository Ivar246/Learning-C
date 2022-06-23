#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
    scanf("%[^s]", name);

    printf("Hello MR. %s\nWelcome to C programming.", name);
    return 0;
}