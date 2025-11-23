#include<stdio.h>
#include<stdlib.h>

int main() {
    int matrix[3][3] = {[0][0] = 1, [2][2] = 1};
    printf("2D Array (Matrix):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
