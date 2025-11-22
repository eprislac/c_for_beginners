#include <stdio.h>
#include <stdlib.h>

int main () {
    int num = 7;

    // If-Else Statement
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    // Switch Statement
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
   int c = 0;
   int y = 0;
    int i = 0;
    while ( i < 20 ) {
        c = c++ + y;
        y = y++ + 2;
        printf("c: %d, y: %d\n", c, y);
        i++;
    }

    for(int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }
    
    int x = 5;
    int z = 6;
    x = z > 7 ? 25 : 50;
    printf("x: %d\n", x);
    return 0;
}
