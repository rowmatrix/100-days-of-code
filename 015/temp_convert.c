#include <stdio.h>

char prompt()
{
    char ch;
    printf("Would you like to convert from Fahrenheit to Celsius (F) or Celsius to Fahrenheit (C)? ");
    scanf(" %c", &ch);
    return ch;
}

void fahrenheit()
{
    int low, high, increment;
    
    printf("Enter the lower Fahrenheit temperature: ");
    scanf("%d", &low);
    printf("Enter the higher Fahrenheit temperature: ");
    scanf("%d", &high);
    
    while (low > high) {
        printf("Enter the lower Fahrenheit temperature: ");
        scanf("%d", &low);
        printf("Enter the higher Fahrenheit temperature: ");
        scanf("%d", &high);
    }
    
    printf("Enter the incremental temperature change: ");
    scanf("%d", &increment);

    while (increment <= 0 || increment > (high-low)) {
        printf("Enter the incremental temperature change: ");
        scanf("%d", &increment);
    }

    int f;
    float c = 0;
    for (f = low; f <= high; f += increment) {
        c = (f - 32) * (5.0/9.0);
        printf("%dF = %.2fC\n", f, c);
    }
}

void celsius()
{
    int low, high, increment;

    printf("Enter the lower Celsius temperature: ");
    scanf("%d", &low);
    printf("Enter the higher Celsius temperature: ");
    scanf("%d", &high);
    
    while (low > high) {
        printf("Enter the lower Celsius temperature: ");
        scanf("%d", &low);
        printf("Enter the higher Celsius temperature: ");
        scanf("%d", &high);
    }
    
    printf("Enter the incremental temperature change: ");
    scanf("%d", &increment);

    while (increment <= 0 || increment > (high-low)) {
        printf("Enter the incremental temperature change: ");
        scanf("%d", &increment);
    }

    int c;
    float f = 0;
    for (c = low; c <= high; c += increment) {
        f = c * 9.0/5.0 + 32;
        printf("%dC = %.2fF\n", c, f);
    }
}

int main()
{   
    char type;
    
    type = prompt();
    while (type != 'F' && type != 'C') {
        type = prompt();
    }
    
    if (type == 'F') {
        fahrenheit();
    }
    else if (type == 'C') {
        celsius();
    }

    return 0;
}
