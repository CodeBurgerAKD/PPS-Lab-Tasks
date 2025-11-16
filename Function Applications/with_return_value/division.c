
#include <stdio.h>

    int division(int num1, int num2) {
        return num1 + num2;
    }
int main() {

        int a,b;

        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);

        int result = division(a,b);

        printf("Division of given two numbers: %d",result);


        return 0;
    }