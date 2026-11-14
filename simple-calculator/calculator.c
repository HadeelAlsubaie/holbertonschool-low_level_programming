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
 * read_operands - asks the user for two numbers A and B
 * @a: pointer where the first number is stored
 * @b: pointer where the second number is stored
 *
 * Return: 1 if both numbers were read, 0 otherwise
 */
int read_operands(int *a, int *b)
{
	printf("A: ");
	if (scanf("%d", a) != 1)
	{
		clear_input();
		printf("Invalid input\n");
		return (0);
	}
	printf("B: ");
	if (scanf("%d", b) != 1)
	{
		clear_input();
		printf("Invalid input\n");
		return (0);
	}
	return (1);
}

/**
 * add_numbers - reads A and B and prints their sum
 *
 * Return: nothing
 */
void add_numbers(void)
{
	int a;
	int b;

	if (read_operands(&a, &b) == 0)
		return;
	printf("Result: %d\n", a + b);
}

/**
 * subtract_numbers - reads A and B and prints A minus B
 *
 * Return: nothing
 */
void subtract_numbers(void)
{
	int a;
	int b;

	if (read_operands(&a, &b) == 0)
		return;
	printf("Result: %d\n", a - b);
}

/**
 * multiply_numbers - reads A and B and prints A times B
 *
 * Return: nothing
 */
void multiply_numbers(void)
{
	int a;
	int b;

	if (read_operands(&a, &b) == 0)
		return;
	printf("Result: %d\n", a * b);
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
		if (choice == 1)
			add_numbers();
		else if (choice == 2)
			subtract_numbers();
		else if (choice == 3)
			multiply_numbers();
		else if (choice < 1 || choice > 4)
			printf("Invalid choice\n");
	}
	return (0);
}
