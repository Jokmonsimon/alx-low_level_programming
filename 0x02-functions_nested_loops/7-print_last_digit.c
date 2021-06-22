#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number to be checked
 *
 * holberton.h: created header
 *
 * Return: always 0 (success)
**/
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
