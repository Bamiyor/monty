 #include "monty.h"

/**
 * f_div - divides the second top element of the stack by the top element
 * @head: pointer to the stack's head
 * @counter: line number
 * Return: void
 */

void f_div(stack_t **head, unsigned int counter)
{
	int len = 0;

	while (head)
	{
		head = head->next;
		len++;
		if (len < 2)
		{
			fprintf(stderr, "L%d: can't div, stack too short\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		h = *head;
		if (h->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
		aux = h->next->n / h->n;
		h->next->n = aux;
		*head = h->next;
		free(h);
	}
}
