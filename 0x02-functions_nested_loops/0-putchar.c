#include "holberton.h"

/**
 * main - prints putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char p[] = "_putchar";

	unsigned int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(p[c]);
	}

		_putchar('\n');
	return (0);
}

