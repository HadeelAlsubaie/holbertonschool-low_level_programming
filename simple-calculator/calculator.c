#include <stdio.h>

/**
 * print_menu - prints the calculator menu
 *
 * Return: nothing
 */
void print_menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
}

/**
 * main - entry point of the simple calculator
 *
 * Return: 0 on success
 */
int main(void)
{
	int choice;

	printf("Simple Calculator\n");
	while (1)
	{
		print_menu();
		if (scanf("%d", &choice) != 1)
			return (0);
		if (choice == 0)
		{
			printf("Bye!\n");
			return (0);
		}
	}
	return (0);
}
