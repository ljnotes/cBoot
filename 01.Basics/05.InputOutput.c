#include <stdio.h>

int main()
{
    // getchar and putchar can be used to deal with I/O
    // They work with integers and are stream based
    char input;
    printf("Input a character\n");
    input = getchar();
    printf("The character entered is %c\n", input);
    // or
    putchar(input);

    return(0);
}
