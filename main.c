/**
 * main - testing
 * Return: 0
 */
#include <stdio.h>
#include <unistd.h>
#include "main.h"
int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1, "STANDARD:\n", 10);
	count_std = printf("Tester\n");
	printf("Printed %d characters\n", count_std);

	write(1, "________________\n", 18);

	write(1, "HOME_MADE:\n", 11);
	count_hmd = _printf("Tester\n");
	printf("Printed %d characters\n", count_hmd);

	return (0);
}
