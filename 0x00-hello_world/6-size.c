#include <stdio.h> // Corrected header inclusion

/**
 * main - Entry point
 * Return 0 (Success)
 */
int main(void)
{
    char a;
    int b;
    long int c;
    long long int d;
    float f;

    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a)); // Corrected format specifier to %lu
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b)); // Corrected format specifier to %lu
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c)); // Corrected format specifier to %lu
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d)); // Corrected format specifier to %lu
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f)); // Corrected format specifier to %lu

    return (0);
}
                                              
