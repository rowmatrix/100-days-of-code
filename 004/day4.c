#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

/********** function prototypes **********/
int  readInput();
int  isPrime(int);
void largestInt(int);
void largestPrime(int);
void primeFactors(int);
void largestIntFactors(int);

/*********** functions ***********/
int readInput()
{
    int n = 0;
    printf("Please enter a positive integer: "); 
    scanf(" %d", &n);
    return n;
}

void largestPrime(int n)
{
    int i;
    for (i = n-1; i >= 2; i--) {
        if ((n % i == 0) && isPrime(i)) {
            printf("The largest prime number that divides %d evenly is %d\n", n, i);
            return;
        }
    }
}

void largestInt(int n)
{
    int i;
    for (i = n-1; i >= 2; i--) {
        if (n % i == 0) {
            printf("The largest number that divides %d evenly is %d\n", n, i);
            return;
        }
    }
}

int isPrime(int n)
{
    int i;
    for (i = n-1; i >= 2; i--) {
        if (n % i == 0) {
            return FALSE; /* composite */
        }
    }
    return TRUE; /* prime */
}

void primeFactors(int n)
{
    printf("Prime factors = ");
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            printf("%d * ", i);
            n = n / i;
        }
    }
    if (n > 2) {
        printf("%d\n", n);
    }
    return;
}

void largestIntFactors(int n)
{
    printf("Largest integer factor set = ");
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d * %d\n\n", i, n/i);
            return;
        }
    }
}

/************ main ************/
int main() 
{
    int num = 0;
    
    num = readInput();
    
    while (num != 'q') {
        if (num < 0 && isalpha(num)) {
            printf("%d is not a positive integer\n\n", num);
        } 
        else {
            if (!isPrime(num)) {
                printf("COMPOSITE\n");
                largestInt(num);
                largestPrime(num);
                primeFactors(num);
                largestIntFactors(num);
            }
            else {
                printf("PRIME\n\n");
            }
        }
        num = readInput();
    }

    printf("Thank you for using my program.\n");
    
    return 0;
}
