#include <stdio.h>

int main()
{
    char input[32];
    printf("Input a string (spaces can be included): ");
    fgets(input, 32, stdin);
    puts(input);

    return 0;
}
