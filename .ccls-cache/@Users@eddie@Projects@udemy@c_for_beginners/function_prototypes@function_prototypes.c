#include<stdio.h>
#include<stdlib.h>

double Average(double data_values[], size_t count);
double Sum(double *x, size_t n);
size_t GetData(double*, size_t);

int main(void) {
    const size_t MAX_COUNT = 100;
    double data_values[MAX_COUNT];
    size_t count = GetData(data_values, MAX_COUNT);
    if(count == 0) {
        printf("No data entered.\n");
        return 1;
    }
    double total = Sum(data_values, count);
    double average = Average(data_values, count);
    printf("Sum: %.2f\n", total);
    printf("Average: %.2f\n", average);
    return 0;
}

double Average(double data_values[], size_t count) {
    double total = 0.0;
    for(size_t i = 0; i < count; i++) {
        total += data_values[i];
    }
    return total / count;
}

double Sum(double *x, size_t n) {
    double total = 0.0;
    for(size_t i = 0; i < n; i++) {
        total += x[i];
    }
    return total;
}

size_t GetData(double* data_values, size_t max_count) {
    size_t count = 0;
    printf("Enter up to %zu data values (negative value to stop):\n", max_count);
    while(count < max_count) {
        double value;
        scanf("%lf", &value);
        if(value < 0) {
            break;
        }
        data_values[count++] = value;
    }
    return count;
}
