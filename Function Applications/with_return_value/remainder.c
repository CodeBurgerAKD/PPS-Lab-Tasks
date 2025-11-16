
#include <stdio.h>

    int modulus(int num1, int num2) {
        return num1 % num2;
    }
int main() {

        int a,b;

        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);

        int result = modulus(a,b);

        printf("Remainder of division of given two numbers: %d",result);


        return 0;
    }