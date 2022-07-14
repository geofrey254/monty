#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line number
 * Return: void
*/

void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	aux = x->next->n * x->n;
	x->next->n = aux;
	*head = x->next;
	free(x);
}
