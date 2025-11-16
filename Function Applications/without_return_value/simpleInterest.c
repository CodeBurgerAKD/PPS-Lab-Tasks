
#include <stdio.h>

    void simpleInterest(double principal_amount, double interest_rate, double time) {
        double simpleInterest = (principal_amount*interest_rate*time)/100;
        printf("simple interest -> %.3lf", simpleInterest);
    }
int main() {

        double p,r,t;

        printf("Enter the Principal amount: ");
        scanf("%lf",&p);
        printf("Enter the Rate: ");
        scanf("%lf",&r);
        printf("Enter the Time: ");
        scanf("%lf",&t);

        simpleInterest(p,r,t);

        return 0;
    }