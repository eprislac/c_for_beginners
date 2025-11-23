#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MONTHS 12

int main() {
    int arr[10]; // must declare array size when defining
    // Seed the random number generator
    time_t t;
    srand((unsigned) time(&t));

    // Fill the array with random numbers between 1 and 100
    for(int i = 0; i < 10; i++) {
        arr[i] = (rand() % 100) + 1;
    }

    // Print the array elements
    printf("Array elements:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    char *days[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" }; // initialize with values
    printf("Days of the week:\n");
    for(int i = 0; i < 7; i++) {
        printf("%s ", days[i]);
    }
    printf("\n");

    int daze[MONTHS] = { 31, 28, 30, 31, 31, 30, 31, 31, 30, 31, 30, 31 }; // partial initialization
    printf("Days in each month:\n");
    for(int i = 0; i < MONTHS; i++) {
        printf("Month %d: %d days\n", i + 1, daze[i]);
    }
    printf("\n");

    float sample_data[500] = {[2] = 500.5, [1] = 300.0, [0] = 100.0 };
    printf("Sample data array:\n");
    for(int i = 0; i < 5; i++) { // print first 5 elements
        printf("sample_data[%d] = %.2f\n", i, sample_data[i]);
    }

    return 0;
}
