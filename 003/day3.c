#include <stdio.h>

int main() 
{
    int num = 0;

    printf("Please enter a positive integer: "); 
    scanf("%d", &num);
    
    while (num != -1) {
        if (num < 0 && num != -1) {
            printf("%d is not a positive integer\n\n", num);
        } 
        else {
            int i;
            int flag = 0;
            for (i = num-1; i >= 2; i--) {
                if (num % i == 0) {
                    printf("%d COMPOSITE %d\n\n", num, i);
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                printf("%d PRIME\n\n", num); /* <<< Change location! */
            }
        }
        printf("Please enter a positive integer: "); 
        scanf("%d", &num);
    }

    printf("Thank you for using my program.\n");
    
    return 0;
}
