#include <stdio.h>

#define TRUE 1
#define FALSE 0

/*********** functions ***********/
int readInput()
{
    int n = 0;
    printf("Please enter a positive integer: "); 
    scanf("%d", &n);
    return n;
}

int largestPrime(int n)
{
    return 0;
}



int isPrime(int n)
{
    int i;
    for (i = n-1; i >= 2; i--) {
        /* composite */
        if (n % i == 0) {
            printf("COMPOSITE\n");
            largestPrime(n);
            return TRUE;
        }
    }
    /* prime */
    printf("PRIME\n\n");
    return FALSE;
}



/************ main ************/
int main() 
{
    int num = 0;
    
    num = readInput();
    
    while (num != -1) {
        if (num < 0 && num != -1) {
            printf("%d is not a positive integer\n\n", num);
        } 
        else {

            isPrime(num);

        }
        num = readInput();
    }

    printf("Thank you for using my program.\n");
    
    return 0;
}
