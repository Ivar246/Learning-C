#include<stdio.h>
int main()
{
    int a, b, c, h;
    printf("Enter the length of three sides of triangel(a, b, c):");
    scanf("%d%d%d", &a,&b,&c);
    if(a*a == b*b +c*c || b*b ==a*a + c*c || c*c == a*a +b*b){
        printf("Is right angle triange.");
    }
    else{
        printf("Not a right angled tringle");
    }

    return 0;
}