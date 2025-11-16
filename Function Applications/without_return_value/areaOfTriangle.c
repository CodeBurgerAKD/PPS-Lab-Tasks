
#include <stdio.h>
#include <math.h>

    void areaOfTriangle(double side1, double side2, double side3) {
        double halfPerimeter = (side1 + side2 + side3) / 2;
        double areaOfTriangle = sqrt(halfPerimeter * (halfPerimeter - side1) * (halfPerimeter - side2) * (halfPerimeter - side3));
        printf("area of triangle -> %.2lf", areaOfTriangle);
    }


int main() {

        double s1,s2,s3;

        printf("Enter the sides of triangle : ");
        scanf("%lf%lf%lf",&s1, &s2, &s3);

        areaOfTriangle(s1,s2,s3);


        return 0;
    }