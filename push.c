#include "monty.h"

/**
 * f_push - add node to the stack or queue
 * @head: stack or queue head
 * @counter: line_number
 * Return: void
 */

void f_push(stack_t **head, unsigned int counter)
{
	if (!bus.arg || !is_valid_integer(bus.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
	}
	int value = atoi(bus.arg);

	if (bus.lifi == 0)
		push_stack(head, value);
	else
		push_queue(head, value);
}
	if (!str)
		return (0);

		while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}
{
	fclose(bus.file);
	free(bus.content);
	free_stack(head);
	exit(EXIT_FAILURE);
}
