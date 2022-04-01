#include <stdio.h>

int main(void)
{
    int miles, yards;
    double kilometers;

    printf("Please enter number of miles as a integer: ");
    scanf("%d", &miles);
    printf("Please enter number of yards as a integer: ");
    scanf("%d", &yards);

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers.\n", kilometers);
}