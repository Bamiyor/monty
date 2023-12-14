#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @head: pointer to the stack's head
 * @counter: line number
 * Return: void
 */

void f_swap(stack_t **head, unsigned int counter)
{
	int len = 0, aux;

	while (head)
{
	head = head->next;
	len++;
}
if (len < 2)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
}
{
stack_t *top = *head;
int temp = top->n;
top->n = top->next->n;
top->next->n = temp;
}
