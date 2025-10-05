

#include <stdio.h>

int main(){

    double fahreheit,centigrade;

    printf("Enter the temperature in celsius ");
    scanf("%lf",&centigrade);

    fahreheit = ((centigrade*9)/5)+32;

    printf("temperature %.2lf of celsius in fahreheit is -> %.2lf",centigrade,fahreheit);

    return 0;
}