/* This program add two integer values 
and displays the results */

#include <stdio.h>

int main (void)
{
    //Declare Variables
    int value1, value2, sum;

    // Assign values and calculate their sum
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    //Display the results
    printf("The sum of %i and %i is %i\b", value1, value2, sum);

    return 0;
}