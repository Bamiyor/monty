#include "monty.h"

/**
 * f_pop - pops the top element off the stack
 * @head: pointer to the stack's head
 * @counter: line number
 * Return: void
 */

void f_pop(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
	*head = top->next;
	free(top);
}

