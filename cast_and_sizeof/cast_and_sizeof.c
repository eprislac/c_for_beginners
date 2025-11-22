#include <stdio.h>
#include <stdlib.h>


int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    // Casting
    float a_to_float = (float)a;
    int b_to_int = (int)b;
    int c_to_int = (int)c;

    printf("Original integer a: %d\n", a);
    printf("Casted to float: %.2f\n", a_to_float);

    printf("Original float b: %.2f\n", b);
    printf("Casted to integer: %d\n", b_to_int);

    printf("Original char c: %c\n", c);
    printf("Casted to integer (ASCII value): %d\n", c_to_int);

    // Sizeof operator
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));

    return 0;
}
