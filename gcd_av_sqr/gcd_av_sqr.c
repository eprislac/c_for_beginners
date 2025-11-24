#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = fmod(a, b);
        a = temp;
    }
    return a;
}

float absolute(float x) {
    return (x < 0) ? -x : x;
}


int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    float result_gcd = gcd(num1, num2);
    double result_sqrt1 = sqrt(num1);
    double result_sqrt2 = sqrt(num2);
    printf("GCD of %u and %u is: %.0f\n", num1, num2, result_gcd);
    printf("Absolute value of %d is: %.2f\n", -num1, absolute(-num1));
    printf("Square root of %u is: %.5f\n", num1, result_sqrt1);
    printf("Square root of %u is: %.5f\n", num2, result_sqrt2);
    return 0;
}
