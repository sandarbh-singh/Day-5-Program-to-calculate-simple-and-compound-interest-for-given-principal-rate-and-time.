//Program-to-calculate-simple-and-compound-interest-for-given-principal-rate-and-time.

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter Principal, Rate (in %%), and Time (in years): ");
    scanf_s("%lf %lf %lf", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100.0;
    compound_interest = principal * pow((1.0 + rate / 100.0), time) - principal;

    printf("Simple Interest = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);
    return 0;
}