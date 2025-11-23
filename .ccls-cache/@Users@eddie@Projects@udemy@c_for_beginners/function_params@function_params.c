#include<stdio.h>
#include<stdlib.h>


void foo(char str[]){
    printf("String inside function: %s\n", str);
}

int main(int argc, char *argv[]) {
    foo(argv[1]);
    return 0;
}
