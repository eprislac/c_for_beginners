// isheboth.c
#include "isheboth.h"
#include <string.h>
#include <stdbool.h>

char* isheboth(const int number) {
    bool divisible_by_3 = (number % 3 == 0);
    bool divisible_by_5 = (number % 5 == 0);

    if (divisible_by_3 && divisible_by_5) {
        return "FizzBuzz";
    } else if (divisible_by_3) {
        return "Fizz";
    } else if (divisible_by_5) {
        return "Buzz";
    } else {
        char* buffer = malloc(12 * sizeof(char)); // Allocate memory for the string
        sprintf(buffer, "%d", number);
        return buffer;
    }
}
