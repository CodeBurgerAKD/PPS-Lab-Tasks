#include <stdio.h>

int main(){

    int n;

    int sum = 0;
    printf("enter the number till which you want sum ");
    scanf("%d",&n);

    for(int i = 0;i<=n;i++){
        sum+=i;
    }

    printf("sum of %d natural number is: %d",n,sum);
    return 0;
}