#include <stdio.h>
#include<cs50.h>

float discount(float regular, int percentage);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percentOff = get_int("Percent Off: ");
    float sale = discount(regular, percentOff);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float regular, int percentOff)
{
    return regular * (100-percentOff) / 100;
}
