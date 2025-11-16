
#include <stdio.h>

    void areaOfRectangle(double length, double breadth) {
        double areaOfRectangle = length * breadth;
        printf("area of rectangle -> %.2lf", areaOfRectangle);
    }


    int main() {

        double l,b;
        
        printf("Enter the length: ");
        scanf("%lf",&l);
        printf("Enter the breadth: ");
        scanf("%lf",&b);

        areaOfRectangle(l,b);

        return 0;
    }