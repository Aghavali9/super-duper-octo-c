#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b , c, delta, x1, x2, im, re;

    printf("Please enter coefficients (a b c): \n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        if(b == 0)
        {
            if (c == 0)
            {
                printf("Undetermined Equation\n");
            }
            else
            {
                printf("Impossible!\n");
            }
        }
        else
        {
            printf("1st Degree Equation\n");
            printf("The answer is: %.2f", -c / b);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta == 0)
        {
            x1 = (-b)/(2*a);
            printf("2 real coincident solutions: ");
            printf("%.2f\n",x1);
        }
        else
        {
            if (delta > 0)
            {
                x1 = (-b + sqrt(delta))/(2*a);
                x2 = (-b - sqrt(delta))/(2*a);
                printf("2 real distinct solutions: \nx1= %.2f\nx2= %.2f", x1, x2);
            }
            else
            {
                re = -b/(2*a);
                im = sqrt(-delta)/(2*a);
                printf("complex conjugate: \nx1= %.2f-i%.2f\nx2= %.2f+i%.2f\n",re, im, re, im);
            }
        }
    }



    return 0;
}
