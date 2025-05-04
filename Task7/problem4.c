#include <stdio.h>

// Define an enum for days of the week starting from Saturday
enum DayOfWeek {
    SATURDAY,    // 0
    SUNDAY,      // 1
    MONDAY,      // 2
    TUESDAY,     // 3
    WEDNESDAY,   // 4
    THURSDAY,    // 5
    FRIDAY       // 6
};

// Function to check if a day is a weekend or a weekday
const char* checkDayType(enum DayOfWeek day) {
    if (day == SATURDAY || day == SUNDAY) {
        return "Weekend";
    } else {
        return "Weekday";
    }
}

int main() {
    // Test with different days
    enum DayOfWeek day1 = SATURDAY;
    enum DayOfWeek day2 = MONDAY;
    enum DayOfWeek day3 = WEDNESDAY;

    printf("Day 1: %d is a %s\n", day1, checkDayType(day1));  // Saturday
    printf("Day 2: %d is a %s\n", day2, checkDayType(day2));  // Monday
    printf("Day 3: %d is a %s\n", day3, checkDayType(day3));  // Wednesday

    return 0;
}
