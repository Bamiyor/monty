#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @head: pointer to the stack's head
 * @counter: line number
 * Return: void
 */

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
{
	h = h->next;
	len++;
}
if (len < 2)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
}
h = *head;
aux = h->n;
h->n = h->next->n;
h->next->n = aux;
}
