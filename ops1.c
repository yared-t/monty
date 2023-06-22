#include "monty.h"

/**
  * pint - program used to print the  new line
  * @stack: used to store the stackck
 * @line_number: used to store the line numbere
  * Return: success
  */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = element->head;
	(void) stack;
	(void) line_number;

	if (element->head == NULL)
		print_error(6);
	while (head->next)
	{
		head = head->next;
	}
	printf("%d\n", head->n);
}


/**
 * swap - program used to swap
 * @stack: used to store the stack
 * @line_number: used tos tore the line number
 * Return:success
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = element->head;
	int val = 0;

	(void) stack;
	(void) line_number;
	if (temp == NULL || temp->next == NULL)
	{
		print_error(8);
	}
	while (temp->next->next)
	{
		temp = temp->next;
	}
	val = temp->n;
	temp->n = temp->next->n;
	temp->next->n = val;
}

/**
 * add - program used to add
 * @stack:used to store the stackack
 * @line_number: used to store the line number
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = element->head;
	int val = 0;

	(void) stack;
	(void) line_number;
	if (temp == NULL || temp->next == NULL)
	{
		print_error(9);
	}
	while (temp->next->next)
	{
		temp = temp->next;
	}
	val = temp->n + temp->next->n;
	temp->n = val;
}
/**
  * pop - progrma used to store the pop
  * @stack: used to store the stck
  * @line_number: program used to store the line
  * Return:success
  */
void pop(stack_t **stack, unsigned int line_number)
{
        stack_t *traverse = element->head;
        stack_t *temp;

        (void) stack;
        (void) line_number;

        temp = malloc(sizeof(stack_t));
        if (!temp)
                print_error(3);
        if (element->head == NULL)
                print_error(7);
        while (traverse->next)
                traverse = traverse->next;

        if (!traverse->prev)
        {
                traverse = NULL;
        }
        else
        {
                temp = traverse;
                traverse = traverse->prev;
                traverse->next = temp->next;
                free(temp);
        }
}
/**
  * nop - program used to do nothing
  * @stack: used to store the stack
  * @line_number:used to store the line numbere
  * Return: success
  */
void nop(stack_t **stack, unsigned int line_number)
{
        (void) stack;
        (void) line_number;
}

