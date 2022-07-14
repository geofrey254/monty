#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: void
*/

void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	if (x->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = x->next->n % x->n;
	x->next->n = aux;
	*head = x->next;
	free(x);
}
