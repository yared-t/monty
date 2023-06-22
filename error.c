#include "monty.h"

/**
 * print_error - progrma used to give theerror messege
 * @e_n: used to store the error message
 * Return: success
 */
void print_error(int e_n)
{
	char *v = "";

	if (e_n == 1)
		fprintf(stderr, "USAGE: monty file\n");
	else if (e_n == 2)
	{
		v = element->fname;
		fprintf(stderr, "Error: Can't open file %s\n", v);
	}
	else if (e_n == 3)
		fprintf(stderr, "Error: malloc failed\n");
	else if (e_n == 4)
	{
		v = element->tokened[0];
		fprintf(stderr, "L%d: unknown instruction %s\n", element->ln, v);
	}
	else if (e_n == 5)
		fprintf(stderr, "L%d: usage: push integer\n", element->ln);
	else if (e_n == 6)
		fprintf(stderr, "L%d: can't pint, stack empty\n", element->ln);
	else if (e_n == 7)
		fprintf(stderr, "L%d: can't pop an empty stack\n", element->ln);
	else if (e_n == 8)
		fprintf(stderr, "L%d: can't swap, stack too short\n", element->ln);
	else if (e_n == 9)
		fprintf(stderr, "L%d: can't add, stack too short\n", element->ln);
	exit(EXIT_FAILURE);
}
