#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

char buf[100];


void enterFirstString()
{
    printf("Enter a word or a phrase (or \\q to quit): ");
    if (!fgets(buf, strlen(buf), stdin)) {
        fprintf(stderr, "Error with input.\n");
    }
}

int palindrome(char *str)
{
    
    
    return TRUE;
}

int main()
{
    enterFirstString();
    


    return 0;
}
