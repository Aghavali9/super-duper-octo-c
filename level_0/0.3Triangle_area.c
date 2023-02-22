#include <stdio.h>
#include <math.h>

int main(void) {

    float a, b , c, s, area;
    int flag_1;

    printf("Please enter sides (a b c): \n");
    flag_1 = scanf("%f %f %f", &a, &b, &c);

    if (flag_1 != 3) {
        printf("Invalid input. Please enter valid numbers.\n");
        return 1;
    } else if (a + b < c || a + c < b || b + c < a) {
        printf("These sides cannot form a valid triangle.\n");
    } else {
        s = (a + b + c) / 2;
        area = sqrt(s* (s - a)*(s - b)*(s - c));
        printf("The area is: %.2f", area);
    }
    return 0;
}
