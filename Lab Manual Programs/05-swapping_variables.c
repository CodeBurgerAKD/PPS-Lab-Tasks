
#include <stdio.h>

int main(){

    int a,b;

    printf("Enter the 1st number ");
    scanf("%d",&a);
    printf("Enter the 2nd number ");
    scanf("%d",&b);

    int temp = a;
    a = b;
    b = temp;

    printf("Updated value are: 1st number -> %d\n2nd number -> %d",a,b);
    
    return 0;
}

