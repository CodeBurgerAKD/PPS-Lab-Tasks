# include <stdio.h>
#include <stdio.h>

int main() {
    double math, science, sst, hindi, english;
    double sum, percentage;

    printf("Enter marks of five subjects (out of 100 each):\n");
    scanf("%lf %lf %lf %lf %lf", &math, &science, &sst, &hindi, &english);

    sum = math + science + sst + hindi + english;

    percentage = (sum / 500.0) * 100;

    printf("Total Percentage: %.2f%%\n", percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 60 && percentage < 80) {
        printf("Grade: C\n");
    } else if (percentage < 60 && percentage >= 0) {
        printf("Grade: D\n");
    } else {
        printf("Invalid percentage calculated. Please check the marks entered.\n");
    }

    return 0;
}