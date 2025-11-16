
#include <stdio.h>

    int addition(int num1, int num2) {
        return num1 + num2;
    }
    int main() {

        int a,b;

        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);

        int result = addition(a,b);

        printf("Addition of given two numbers: %d",result);


    return 0;
}