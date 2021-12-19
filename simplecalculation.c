#include<stdio.h>
int main(){
    //variable Decalration 
    int firstNum;
    int secondNum;
   
    //getting user input
    printf("Enter first number: ");
    scanf("%d", &firstNum);
    printf("Enter second number: ");
    scanf("%d", &secondNum);
    printf("\n");
    //operation
   int add= firstNum + secondNum;
   int sub= firstNum - secondNum;
   int mul= firstNum * secondNum;
   int rem= firstNum % secondNum;
   int  quo= firstNum / secondNum;
    //displaying calculation
    printf("The sum is: %d\n", add);
    printf("The diff is: %d\n", sub);
    printf("The multiplication is: %d\n", mul);
    printf("The remainder is: %d\n", rem);
    printf("The quotient is: %d\n", quo);

}