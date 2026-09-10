#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    //Defining local integer variables
    int motorCount, totalPackageWeight;

    //Q&A section
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);

    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);

    //Printing/outputting whether or not the conveyor belt system can handle the input
    if (MOTOR_CAPACITY * motorCount >= totalPackageWeight) {
        printf("YES! The conveyor belt can carry the packages.");
    }
    else {
        printf("No. The conveyor belt cannot carry the packages.");
    }
}
