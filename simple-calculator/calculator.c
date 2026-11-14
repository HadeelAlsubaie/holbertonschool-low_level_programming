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
 * clear_input - removes the rest of the line the user typed
 *
 * Return: nothing
 */
void clear_input(void)
{
	int c;

	c = getchar();
	while (c != '\n' && c != EOF)
		c = getchar();
}

/**
 * main - entry point of the simple calculator
 *
 * Return: 0 on success
 */
int main(void)
{
	int choice;
	int result;

	printf("Simple Calculator\n");
	while (1)
	{
		print_menu();
		result = scanf("%d", &choice);
		if (result == EOF)
			return (0);
		if (result != 1)
		{
			clear_input();
			printf("Invalid choice\n");
			continue;
		}
		if (choice == 0)
		{
			printf("Bye!\n");
			return (0);
		}
		if (choice < 1 || choice > 4)
			printf("Invalid choice\n");
	}
	return (0);
}
