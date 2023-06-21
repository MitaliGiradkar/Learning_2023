/* Write a program using structures to calculate the difference between two time periods using a user-defined function. */
#include <stdio.h>

// Structure to represent a time period
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time difference;

    // Convert all time components to seconds
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    // Calculate the difference in seconds
    int timeDifferenceInSeconds = endTimeInSeconds - startTimeInSeconds;

    // Convert the difference back to hours, minutes, and seconds
    difference.hours = timeDifferenceInSeconds / 3600;
    timeDifferenceInSeconds %= 3600;
    difference.minutes = timeDifferenceInSeconds / 60;
    difference.seconds = timeDifferenceInSeconds % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    // Read the start time
    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));

    // Read the end time
    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));

    // Calculate the time difference
    difference = calculateTimeDifference(startTime, endTime);

    // Display the time difference
    printf("Time difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
