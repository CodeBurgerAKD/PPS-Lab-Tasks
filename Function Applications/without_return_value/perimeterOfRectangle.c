
#include <stdio.h>

    void perimeterOfRectangle(double length, double breadth) {
        double perimeterOfRectangle = 2 * (length + breadth);
        printf("perimeter of rectangle -> %.2lf", perimeterOfRectangle);
    }


int main() {

        double l,b;

        printf("Enter the length: ");
        scanf("%lf",&l);
        printf("Enter the breadth: ");
        scanf("%lf",&b);

        perimeterOfRectangle(l,b);

        return 0;
    }