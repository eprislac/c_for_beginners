#include <stdlib.h>
#include <stdio.h>

float calculate_area(float width, float length) {
    return width * length;
}

float calculate_perimeter(float width, float length) {
    return 2 * (width + length);
}

int main(int argc, char *argv[]) {
  float width = atof(argv[1]);
  float length = atof(argv[2]);
  float area = calculate_area(width, length);
  float perimeter = calculate_perimeter(width, length);
  printf("The area for a rectangle with a height of %.2f and a length of %.2f is: %.2f\n", width, length, area);
  printf("The perimeter for a rectangle with a height of %.2f and a length of %.2f is: %.2f\n", width, length, perimeter);
  return 0;
}
