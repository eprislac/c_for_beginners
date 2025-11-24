#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float add(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float subtract(float a, float b);

int main(int argc, char *argv[]) {
  printf("Number of arguments: %d\n", argc);
  for(int i = 0; i < argc; i++) {
      printf("Argument %d: %s\n", i, argv[i]);
  }
  if(argc != 4) {
      printf("Usage: %s <num1> <num2> <operation>\n", argv[0]);
      printf("Operation can be add, subtract, multiply, divide\n");
      return 1;
  }
  float num1 = atof(argv[1]);
  float num2 = atof(argv[2]);
  char *operation = argv[3];
  float result;
  if(strcmp(operation, "add") == 0) {
      result = add(num1, num2);
  } else if(strcmp(operation, "subtract") == 0) {
      result = subtract(num1, num2);
  } else if(strcmp(operation, "multiply") == 0) {
      result = multiply(num1, num2);
  } else if(strcmp(operation, "divide") == 0) {
      result = divide(num1, num2);
  } else {
      printf("Unknown operation: %s\n", operation);
      return 1;
  }
  printf("Result: %.2f\n", result);
  return 0;

}

float add(float a, float b) {
    return a + b;
}

float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if(b == 0) {
        printf("Error: Division by zero.\n");
        exit(1);
    }
    return a / b;
}

float subtract(float a, float b) {
    return a - b;
}
