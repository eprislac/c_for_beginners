#include<stdio.h>

int main() {
    // Using 'break' to exit the loop when i equals 3
    printf("Using break:\n");
    for(int i = 0; i < 5; i++) {
        if(i == 3) {
            break; // Exit the loop
        }
        printf("Iteration %d\n", i);
    }

    // Using 'continue' to skip the iteration when i equals 3
    printf("\nUsing continue:\n");
    for(int i = 0; i < 5; i++) {
        if(i == 3) {
            continue; // Skip this iteration
        }
        printf("Iteration %d\n", i);
    }

    return 0;
}
