#include <stdio.h>

int main() 
{
    int num = 0;

    while (num != -1) {
        printf("Please enter a positive integer: "); 
        scanf("%d", &num);

        if (num < 0 && num != -1) {
            printf("%d is not a positive integer\n", num);
        } 
        else {
            int i;
            for (i = num-1; i >= 2; i--) {
                if (num % i == 0) {
                    printf("%d COMPOSITE %d\n\n", num, i);
                    break;
                }
                printf("%d PRIME\n\n", num); /* <<< Change location! */
            }
        }
    }

    printf("Thank you for using my program.\n");
    
    return 0;
}
