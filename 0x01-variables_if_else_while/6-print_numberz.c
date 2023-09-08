#include<stdio.h>
#include<stdlib.h>
/* main -  prints all single digit numbers of base 10 starting from 0
* Return: 0 if successful. 1 otherwise
*/
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
