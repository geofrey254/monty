#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @head: head of stack
 * @counter: line number
 * Return: void
*/

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *x;
	int len = 0, aux;

	x = *head;

	while (x)
	{
		x = x->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	aux = x->n;
	x->n = x->next->n;
	x->next->n = aux;
}
