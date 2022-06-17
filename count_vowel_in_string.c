#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    system("clear");
    char string[100];
    int i, count=0;
    printf("Enter the string:");
    scanf("%s", &string);
    
    for(i=0; string[i]!='\0'; i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
            count++;
            printf("%c", string[i]);
        }
    }
    if(count==0){
        printf("No vowel are there in %s", string[100]);
    }
    else{
        printf("%d vowel are there in %s", count, string[100]);
    }
    
    return 0;
}