#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float hours_worked = atof(argv[1]);
    float base_pay_rate = 12.0; // Base pay rate per hour;
    float overtime_pay_rate = hours_worked > 40.0 ? base_pay_rate * 1.5 : base_pay_rate;
    float total_pay = 0.0;  
    float tax_rate = 0.0;  
    if (hours_worked > 40.0) {
        float overtime_hours = hours_worked - 40.0;
        float regular_hours = 45.0;
        total_pay = (regular_hours * base_pay_rate) + (overtime_hours * overtime_pay_rate);
    } else {
        total_pay = hours_worked * base_pay_rate;
    }
    float total_tax = 0.0;
    if (total_pay <=300.0) {
        tax_rate = 0.15;
        printf ("Tax rate applied: 15%%\n");
        printf ("Total pay before tax: $%.2f\n", total_pay - (total_pay * 0.15));
    } else if (total_pay > 300.0 && total_pay <= 450.0) {
        tax_rate = 0.20;
        float md_range = total_pay - 300.0;
        if (md_range <= 150) {
            float tax_on_low_range = 300.0 * 0.15;
            float tax_on_md_range = md_range * 0.20;
            return total_tax = tax_on_low_range + tax_on_md_range;
        } else {
            float tax_on_low_range = 300.0 * 0.15;
            float tax_on_md_range = 150.0 * 0.20;
            float tax_on_high_range = (md_range - 150.0) * 0.25;
            return total_tax = tax_on_low_range + tax_on_md_range + tax_on_high_range;
        }
    }
  printf ("Total pay after tax: $%.2f\n", total_pay - total_tax);

    return 0;
}
