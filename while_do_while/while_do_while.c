#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 0;
    int y = 0;
    int i = 0;
    while ( i < 20 ) {
        c = c++ + y;
        y = y++ + 2;
        printf("c: %d, y: %d\n", c, y);
        i++;
    }
    int x = 5;
    int z = 6;
    x = z > 7 ? 25 : 50;
    do {
        printf("x: %d\n", x);
        x--;
    } while (x > 0);
    return 0;
}

