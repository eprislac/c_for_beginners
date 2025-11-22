#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char str1[] = "-h";
  char str2[] = "--help"; 
    if ((strcmp(argv[1], str1) == 0) || (strcmp(argv[1], str2) == 0) || argc != 3) {
        printf("Usage: %s <unsigned int a> <unsigned int b>\n", argv[0]);
        return 0;
    }
    unsigned int a = atoi(argv[1]); // 0001 1101
    unsigned int b = atoi(argv[2]); // 0000 1111

    printf("a = %u, b = %u\n", a, b);
    printf("a & b = %u\n", a & b);   // AND
    printf("a | b = %u\n", a | b);   // OR
    printf("a ^ b = %u\n", a ^ b);   // XOR
    printf("~a = %u\n", ~a);         // NOT
    printf("a << 2 = %u\n", a << 2); // Left Shift
    printf("a >> 2 = %u\n", a >> 2); // Right Shift

    return 0;
}
