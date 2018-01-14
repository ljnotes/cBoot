#include <stdio.h>

int main()
{
    // scanf("format", &variable)

    // format is a text formatting string, which determines the requested input
    // placeholders %d, %c, %f, %s, etc. can be used

    // variable should be prefixed with &

    // Take an integer++++
    int input;
    printf("Please enter a whole number: ");
    scanf("%d", &input);
    printf("The value entered is: %d\n", input);

    // String
    // We can skip & as array do not require them
    // Here inputString is character array
    // Note: scanf can only read one word; it breaks if you enter space
    // In order to read a string with space, we can use fgets
    char inputString[] = "";
    printf("Enter a string value: ");
    scanf("%s", inputString);
    printf("The value entered is: %s\n", inputString);

    return 0;
}
