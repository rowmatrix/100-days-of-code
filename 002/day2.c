#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* PI value */

int main() 
{
    float side, base, height, width, radius;
    float area;
    char shape;
    
    printf("Enter a shape (t, s, r, c): ");
    scanf("%c", &shape);

    /* triangle */
    if (shape == 't') {
        printf("Enter the base of the triangle: ");
        scanf("%f", &base);
        printf("Enter the height of the triangle: ");
        scanf("%f", &height);

        area =  (base * height) / 2;
        printf("The area of the triangle is %.0f.\n", area);
    }
    /* square */
    else if (shape == 's') {
        printf("Enter the side of the square: ");
        scanf("%f", &side);

        area = side * side;
        printf("The area of the square is %.0f.\n", area);
    }
    /* rectangle */
    else if (shape == 'r') {
        printf("Enter the height of the rectangle: ");
        scanf("%f", &height);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);

        area = height * width;
        printf("The area of the rectangle is %.0f.\n", area);
    }
    /* circle */
    else if (shape == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);

        area = M_PI * radius * radius;
        printf("The area of the circle is %.2f.\n", area);
    }
    /* error */
    else {
        fprintf(stderr, "Incorrect input (t, s, r, c)\n");
        exit(1);
    }

    return 0;
}
