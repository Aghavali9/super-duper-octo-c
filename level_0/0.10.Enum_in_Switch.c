#include <stdio.h>


enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main() {
    enum Day today = Wednesday;

    switch(today) {
        case Monday:
            printf("Today is Monday");
            break;
        case Tuesday:
            printf("Today is Tuesday");
            break;
        case Wednesday:
            printf("Today is Wednesday");
            break;
        case Thursday:
            printf("Today is Thursday");
            break;
        case Friday:
            printf("Today is Friday");
            break;
        case Saturday:
            printf("Today is Saturday");
            break;
        case Sunday:
            printf("Today is Sunday");
            break;
        default:
            printf("Invalid day");
            break;
    }

    return 0;
}

