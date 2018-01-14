#include <stdio.h>

int main()
{
    printf("The whole number value is: %d\n", 3*3);
    printf("The above was the result of multiplication of %d, and %d\n", 3, 3);

    // Other Placeholders
    // %d - Integer (whole number) values
    // %f - Floating-point values
    // %s - Strings
    // %c - Single characters
    // %% - Percentage sign

    printf("I am a character: %c\n", 96);
    printf("I am doing %c %s\n", 'C', "Programming");

    return (0);
}
