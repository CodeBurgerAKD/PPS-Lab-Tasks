
#include <stdio.h>
#include <math.h>


    void compoundInterest(double principal_amount, double interest_rate, double time) {
        double amount = principal_amount*pow((1+interest_rate/100),time);
        double compoundInterest = amount - principal_amount;
        printf("compound interest -> %.3lf", compoundInterest);
    }
int main() {

        double p,r,t;
        
        printf("Enter the Principal amount: ");
        scanf("%lf",&p);
        printf("Enter the Rate: ");
        scanf("%lf",&r);
        printf("Enter the Time: ");
        scanf("%lf",&t);

        compoundInterest(p,r,t);

        return 0;
    }