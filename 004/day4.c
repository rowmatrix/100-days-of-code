#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

/********** function prototypes **********/
void readInput(char*);
int  isPrime(int);
void largestInt(int);
void largestPrime(int);
void primeFactors(int);
void largestIntFactors(int);

/*********** functions ***********/
void readInput(char *u_in)
{
    /*int n = 0;*/
    printf("Please enter a positive integer: "); 
    /*scanf("%d", &n);*/
    fgets(u_in, 100, stdin);
    if (!u_in) {
        fprintf(stderr, "Error in input.\n");
        exit(1);
    }
    else if (strlen(u_in) > sizeof(int)) {
        fprintf(stderr, "Too long\n");
        exit(1);
    }
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
    char u_input[100] = "";
    int num = 0;

    readInput(u_input);

    while (u_input[0] != 'q') {
        num = atoi(u_input); 
        if (num <= 0) {
            printf("%c is not a positive integer\n\n", u_input[0]);
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
        readInput(u_input);
    }

    printf("Thank you for using my program.\n");
    
    return 0;
}
