#include "monty.h"

/**
 * f_pop - prints the top
 * @head: head of stack
 * @counter: line number
 * Return: Void
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}

