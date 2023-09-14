#include <stdio.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

void print_alphabet(void)
{
    int i;

    for (i = 97; i < 123; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}

void print_alphabet_x10(void)
{
    int i, j;

    for (j = 0; j < 10; j++)
    {
        for (i = 97; i < 123; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
    }
}

int _abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    return (n);
}

void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i < 98; i++)
        {
            printf("%d, ", i);
        }
    }
    else
    {
        for (i = n; i > 98; i--)
        {
            printf("%d, ", i);
        }
    }

    printf("98\n");
}

int main(void)
{
    print_alphabet();
    print_alphabet_x10();
    printf("%d\n", _abs(-98));
    print_to_98(0);
    return (0);
}

