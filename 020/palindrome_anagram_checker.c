#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
 *  yesOrNo parameters
 *
 *  choice 1: palindrome
 *  choice 0: sub-anagram
 *
 */ 
int yesOrNo(int choice)
{
    char answer[10];
    strcpy(answer,"");

    if (choice) {
        printf("Would you like to see if the phrase is a palindrome? ");
    }
    else {
        printf("Would you like to play the sub-anagram game? ");
    }
    scanf("%s", answer);

    int i;
    for (i = 0; answer[i]; i++) {
        answer[i] = tolower(answer[i]);
    }
    printf("%s\n", answer); /* test tolower() */

    while (strcmp(answer, "yes") && strcmp(answer, "no")) {
        if (choice) {
            printf("Would you like to see if the phrase is a palindrome? ");
        }
        else {
            printf("Would you like to play the sub-anagram game? ");
        }
        scanf("%s", answer);
    }


    if (strcmp(answer, "yes")) {
        return TRUE; /* answer = yes  */ 
    }
    return FALSE; /* answer = no */
}

void enterFirstString(char *str)
{
    char buf[100];
    /*buf[0] = '\0';*/ /* initialization */

    printf("Enter a word or a phrase (or \\q to quit): ");
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    fgets(buf, strlen(buf), stdin);

    printf("%d", (int)strlen(buf)) ;
    /*if (!fgets(buf, strlen(buf), stdin)) {
        fprintf(stderr, "Error with input.\n");
        exit(1);
    }*/
    
    printf("%s\t", buf);
    strlcpy(str, buf, sizeof(str));
}

void palindrome(char *str)
{
    if (yesOrNo(1)) {
        /* check for palindrome here*/            
    }
}

void sub_anagram(char *str)
{
    if (yesOrNo(0)) {
        /* check for sub-anagram here */
    }
}

int main()
{
    char str[100];
    enterFirstString(str);
        
    while (strcmp(str,"\\q") != 0) {
        palindrome(str);
        sub_anagram(str);
    }

    return 0;
}
