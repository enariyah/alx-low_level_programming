/*
 * File: 2-print_alphabet_x10.c
 * Auth: hopmike
 */
#include "main.h"
/**
 * main - entery here alphabet 10x
 *
 * description: print alphabets 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 1;

	while (b <= 10)
	{
	b++;
	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
	}
}
