#include <stdio.h>

int main()
{
    float expr1 = 16 + 34.2 * 35 - 39.2 / 2 * 45;
    float expr2 = 29 * 23 - 34 / 13 + 43 / (23 * 13 - 12);
    float expr3 = (29 - 97 * (72 - 9 / 3) + 31 / 12) % 14;

    printf("16 + 34.2 * 35 - 39.2 / 2 * 45 =  %.6f\n", expr1);
    printf("9 * 23 - 34 / 13 + 43 / (23 * 13 - 12) = %.6f\n", expr2);
    printf("(29 - 97 * (72 - 9 / 3) + 31 / 12) %% 14 = %.6f\n", expr3);
    return 0;
}
