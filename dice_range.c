// This program reads the number of sides on a set of dice 
// and how many of them are being rolled
// Coded by Jemma Chan z5383619 

#include <stdio.h>

int main(void) {
    int Dice_Side;
    int Dice_Roll;
    int low;
    int high;
    double average;

    // scanning the dice values
    printf("Enter the number of sides on your dice: ");
    scanf("%d", &Dice_Side);
    printf("Enter the number of dice being rolled: ");
    scanf("%d", &Dice_Roll);

    // compute the range 
    low = Dice_Roll;
    high = Dice_Side * Dice_Roll;

    // compute the average 
    average = (low + high) / 2.0; 

    if (Dice_Side <= 0 || high <= 0) {
        printf("These dice will not produce a range.\n");
    } else {
        printf("Your dice range is %d to %d.\n", low, high);
        printf("The average value is %lf\n", average);
    }
    return 0;
}
