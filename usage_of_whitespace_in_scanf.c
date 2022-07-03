#include<stdio.h>
#include<ncurses.h>

int main()
{
    int n1;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter the character: ");
    scanf(" %c", &ch);

    printf("Number = %d \t character = %c\n", n1, ch);

    return 0;
}