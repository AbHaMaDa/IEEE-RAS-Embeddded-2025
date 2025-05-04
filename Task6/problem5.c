#include <stdio.h>
#include <string.h>

// Define a structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
int compareDates(struct Date *date1, struct Date *date2) {
    if (date1->day == date2->day && date1->month == date2->month && date1->year == date2->year) {
        return 1; // Dates are equal
    }
    return 0; // Dates are not equal
}

int main() {
    struct Date date1, date2;
    struct Date *ptr1 = &date1;  // Pointer to the first date
    struct Date *ptr2 = &date2;  // Pointer to the second date

    // Input for the first date
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &ptr1->day, &ptr1->month, &ptr1->year);

    // Input for the second date
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &ptr2->day, &ptr2->month, &ptr2->year);

    // Compare the two dates
    if (compareDates(ptr1, ptr2)) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}
