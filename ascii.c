#include <stdio.h>

int main()
{
    //variable
    char x;

    //Input any character
    printf("Enter any character:");
    scanf("%c", &x);

    //ascii value of input character
    printf("\nASCII value of character %c is: %d\n", x, x);
    return 0;
}
