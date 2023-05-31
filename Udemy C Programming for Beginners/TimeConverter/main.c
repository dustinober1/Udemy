#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define and initialize variables
    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0.0;

    // Print a prompt asking the user to enter a number of minutes
    printf("Please enter the number of minutes: ");

    // Read the number of minutes entered by the user
    scanf("%d", &minutesEntered);

    // Calculate the number of minutes in a year (60 minutes/hour * 24 hours/day * 365 days/year)
    minutesInYear = (60 * 24 * 365);

    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / 60.0) / 24.0;

    // Print out the results in years and days
    printf("%d minutes is approximately %f years and %f days\n", minutesEntered, years, days);

    return 0;
}