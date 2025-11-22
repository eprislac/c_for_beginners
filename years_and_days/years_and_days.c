#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  float seconds = atof(argv[1]);
  float minutes = seconds / 60.0;
  float hours = minutes / 60.0;
  float days = hours / 24.0;
  float years = days / 365.0;
  printf("%.2f seconds is equal to:\n", seconds);
  printf("%.2f minutes\n", minutes);
  printf("%.2f hours\n", hours);
  printf("%.2f days\n", days);
  printf("%.2f years\n", years);
  printf("Or, %.2d years and %.2d days\n", (int)years, (int)days - ((int)years * 365));
  return 0;
}
