#include <stdio.h>

int main()
{
    float p, t, r, SI;

    printf("Enter the principal amount in rupee: ");
    scanf("%f", &p);
    printf("Enter the time in years: ");
    scanf("%f", &t);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    SI = (p * t * r) / 100;
    printf("Simple Interest is: %f", SI);

    return 0;
}