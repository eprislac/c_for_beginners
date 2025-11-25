#include<stdio.h>

#define PI 3.14159
#define EULER 2.71828
#define GRAVITY 9.81
#define TAXRATE 0.15


int main () {
    const char* message = "Demonstrating the use of constants in C";
    printf("%s\n", message);
    printf("Value of PI: %f\n", PI);
    printf("Value of Euler's Number: %f\n", EULER);
    printf("Value of Gravity: %f m/s^2\n", GRAVITY);
    printf("Value of Tax Rate: %f\n", TAXRATE);

    return 0;
}
