//WAP a c program to check whether the the entered letter is vowel or not 
#include<stdio.h>
int main(){
    char letter;
    int isLowerCase, isUpperCase;
    //accepting the character from the user
    printf("Enter the character for test:");
    scanf("%c", &letter);

    isLowerCase= (letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u');
    isUpperCase= (letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U');

    if(isLowerCase || isUpperCase){
        printf("%c is vowel.\n", letter);
    }else{
        printf("%c is not a vowel.\n", letter);
    }
    return 0;
}