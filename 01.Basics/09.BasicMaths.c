#include <stdio.h>

int main()
{
    int num1;
    int num2 = 9;
    printf("Input a number to do operation with %d: ", num2);
    scanf("%d", &num1);
    printf("The result of addition is: %d\n", num1 + num2);
    printf("The result of subtraction is: %d\n", num1 - num2);
    printf("The result of multiplication is: %d\n", num1 * num2);
    printf("The result of division is: %d\n", num1 / num2); // Not the intended result here. We need to use float.

    return (0);
}
