#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element by the top element
 * @head: pointer to the stack's head
 * @counter: line number
 * Return: void
 */

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *top = *head;
	int len = 0, aux;

	while (top)
	{
		top = top->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can’t mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (top->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = top->next->n % top->n;
	top->next->n = aux;
	*head = top->next;
	free(top);
}
