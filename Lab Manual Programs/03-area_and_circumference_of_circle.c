

#include<stdio.h>

int main(){
    double radius,circumference,area;
    printf("Enter the radius of circle ");
    scanf("%lf",&radius);


    circumference = (2*22*radius)/7;
    area = (22*radius*radius)/7;

    printf("Circumference of circle with radius = %.2lf is -> %.2lf\n",radius,circumference);
    printf("Area of circle with radius = %.2lf is -> %.2lf",radius,area);
    return 0;
}



    

    
