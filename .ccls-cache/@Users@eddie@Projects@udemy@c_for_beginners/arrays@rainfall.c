#include<stdio.h>
#include<stdlib.h>
#define MONTHS 12
#define YEARS 5
int main() {
  float matrix[5][12] = {
    {3.1, 2.5, 4.0, 3.6, 5.2, 1.8, 2.9, 3.3, 4.1, 2.7, 3.8, 4.5}, // Year 1
    {2.9, 3.0, 4.2, 3.8, 5.0, 2.0, 3.1, 3.5, 4.3, 2.9, 3.6, 4.7}, // Year 2
    {3.2, 2.8, 4.1, 3.7, 5.1, 1.9, 3.0, 3.4, 4.2, 2.8, 3.7, 4.6}, // Year 3
    {3.0, 2.6, 4.3, 3.5, 5.3, 1.7, 2.8, 3.2, 4.0, 2.6, 3.9, 4.4}, // Year 4
    {3.3, 2.9, 4.0, 3.9, 5.4, 2.1, 3.2, 3.6, 4.4, 2.9, 3.5, 4.8}  // Year 5
  };
  int year[YEARS] = {2020, 2021, 2022, 2023, 2024};
  char *months[MONTHS] = {
      "Jan", "Feb", "Mar", "Apr", "May", "Jun",
      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
  };
  float annual_rainfall[YEARS];
  for(int i = 0; i < YEARS; i++) {
      float total = 0.0;
      for(int j = 0; j < MONTHS; j++) {
          total += matrix[i][j];
      }
      annual_rainfall[i] = total;
  };
  printf("Year\tAnnual Rainfall (inches)\n");
  for(int i = 0; i < YEARS; i++) {
      printf("%d\t%.2f\n", year[i], annual_rainfall[i]);
  }
  printf("\n");
  printf("Monthly Averages: \n");
  for(int j = 0; j < MONTHS; j++) {
      float month_total = 0.0;
      for(int i = 0; i < YEARS; i++) {
          month_total += matrix[i][j];
      }
      float month_avg = month_total / 5.0;
      printf("%s: %.2f inches\n", months[j], month_avg);
    }
  return 0;
}
