#include "monty.h"
/**
 * f_pall - prints all the values on the stack
 * @head: pointer to the stack's head
 * Return: void
 */

void f_pall(stack_t **head)
{
	stack_t *current = *head;

	if (current == NULL)
		return;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
