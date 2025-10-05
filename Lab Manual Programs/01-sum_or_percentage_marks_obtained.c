#include <stdio.h>

int main(){

    double maths,science,english,sst,hindi,totalMarks,percentageOfMarks;

    printf("Enter Maths marks ");
    scanf("%lf",&maths);
    printf("Enter Science marks ");
    scanf("%lf",&science);
    printf("Enter SST marks ");
    scanf("%lf",&sst);
    printf("Enter English marks ");
    scanf("%lf",&english);
    printf("Enter Hindi marks ");
    scanf("%lf",&hindi);

    totalMarks = maths+science+hindi+sst+english;
    percentageOfMarks = (totalMarks/500)*100;

    printf("Total marks scored is -> %.1lf\n",totalMarks);
    printf("Percentage scored is -> %.2lf",percentageOfMarks);

    return 0;
}

