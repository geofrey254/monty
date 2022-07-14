#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: head of stack
 * @counter: line number
 * Return: void
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *x;
	(void)counter;

	x = *head;

	while (x)
	{
		if (x->n > 127 || x->n <= 0)
		{
			break;
		}
		printf("%c", x->n);
		x = x->next;
	}
	printf("\n");
}
