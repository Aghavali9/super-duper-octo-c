#include <stdio.h>

int main(void) {
    int n, i, flag_1;
    float h = 0.0;

    printf("Please enter an integer:\n");
    flag_1 = scanf("%d", &n);

    if (flag_1 == 1 && n > 0) {
        for (i=1; i <= n; i++)
            h = h + 1/(float)(i);
        printf("HN: %f", h);
    }else
        printf("not noice");
    return 0;
}
