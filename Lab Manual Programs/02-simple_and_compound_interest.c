
#include<stdio.h>
#include<math.h>

int main(){
    double principalAmount,rate,time,amount,compoundInterest,simpleInterest;
    printf("Enter the principal amount ");
    scanf("%lf",&principalAmount);
    printf("Enter the rate ");
    scanf("%lf",&rate);
    printf("Enter the time ");
    scanf("%lf",&time);

    amount = principalAmount * pow((1+rate/100),time);
    compoundInterest = amount - principalAmount;
    simpleInterest = (principalAmount*rate*time)/100;

    printf("compound interest on pricipal amount = Rs%.2lf, rate = %.2lf%, time = %.2lf years is -> %.2lf\n",principalAmount,rate,time,compoundInterest);
    printf("Simple interest on principal amount = Rs%0.2lf, rate %0.2lf%, for time = %0.2lf years is -> %0.2lf",principalAmount,rate,time,simpleInterest);
    return 0;
}






    

    
